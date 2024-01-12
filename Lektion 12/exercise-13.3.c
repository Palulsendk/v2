#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PROTECTED_SPACE '@'
#define PROTECTED_NEWLINE '$'
#define BUFFER_MAX 1000

struct person {
    char *name;
    int age;
    char sex;
};

typedef struct person person;

/* Make and return a person */
person *make_person(const char *name, const int age, const char sex);

/* pretty print person on standard output */
void prnt_person(person *b);

/* print person for storage purposed on ofp */
void print_person(person *p, FILE *ofp);

/* retrieve person from ifp and return a pointer to it */
person *read_peson(FILE *ifp);


/* Allocated memory to a person, and allocate strings to be initialized by the 
   string constants passed as parameter */
person *make_person(const char *name, const int age, const char sex){
    static person *result;
    result = (person*)malloc(sizeof(person));

    /* Copy string constants to dynamically allocated strings */
    result->name = strcpy((char *)calloc(strlen(name)+1,sizeof(char)),
                          name);
    result->age = age;
    result->sex = sex;

    return result;
}

/* pretty print person p to standard output */
void prnt_person(person *p){
    printf("Name: %s\n"
           "Age: %i\n"
           "Sec: %c\n",
           p->name, p->age, p->sex);
}

char *white_space_protect(char *str){
    int str_lgt = strlen(str), i, j;
    for(i = 0; i < str_lgt; i++){
        if (str[i] == ' ')
            str[i] = PROTECTED_SPACE;
        else if (str[i] == '\n')
            str[i] = PROTECTED_NEWLINE;
    }
    return str;
}

char *white_space_deprotect(char *str){
    int str_lgt = strlen(str), i;
    for(i = 0; i < str_lgt; i++){
        if (str[i] == PROTECTED_SPACE)
            str[i] =  ' ';
        else if (str[i] == PROTECTED_NEWLINE)
            str[i] = '\n';
    }
    return str;
}

/* Encode the person pointed to by p in the string str */
void encode_person(person *p, char *str){
    sprintf(str, "%s %i %c\n",
            white_space_protect(p->name),
            p->age, p->sex);
}

/* Decode the string str to a person and return it */
person *decode_person(char *str){
    char name[100];
    int age;
    char sex;

    sscanf(str, "%s %i %c",
           name, &age, &sex);

    return make_person(white_space_deprotect(name),
                       age, sex);
}


void print_person(person *p, FILE *ofp){
    char buffer[BUFFER_MAX];
    encode_person(p, buffer);
    fprintf(ofp, "%s", buffer);
}

person *read_person(FILE *ifp){
    char buffer[BUFFER_MAX];
    fgets(buffer, BUFFER_MAX, ifp);
    return decode_person(buffer);
}
