#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LGT 50
#define MAX_PERSONS 25

struct person{
    char fornavn[MAX_NAME_LGT];
    char efternavn[MAX_NAME_LGT];
    char vejnavn[MAX_NAME_LGT];
    int vejnummer;
    int postnummer;
    char bynavn[MAX_NAME_LGT];
};

typedef struct person person;

person read_person(FILE *fp);
int read_all(char *file_name, person p_array[]);
void print_all(person all[], int n,  char* file_name);
void print_person(person p, FILE *fp);
void print_person_full(person p, FILE *fp);
int person_compare(const void *p1, const void *p2);
void trim_string(char *str);

int main(void) {
    person all_persons[MAX_PERSONS];
    int n;

    n = read_all("personer-ind.txt", all_persons);
    qsort(all_persons, n, sizeof(person), person_compare);
    print_all(all_persons, n, "personer-ud.txt");

    return 0;
}

person read_person(FILE *fp){
    person res;
    int scanres;
    char fn[MAX_NAME_LGT], en[MAX_NAME_LGT];

    scanres = fscanf(fp, " %s %[a-zA-Z] ,"      /* Fornavn, efternavn uden komma, komma */
                         " %[^0-9] %d ,"        /* Indtil vejnummer, vejnummer som int, saa komma */
                         " %d %[a-zA-Z] . ",    /* Postnummer som int, bynavn uden punktum, punktum */
                     res.fornavn, res.efternavn,
                     res.vejnavn, &res.vejnummer,
                     &res.postnummer, res.bynavn);

    trim_string(res.vejnavn);

    if (scanres == 6){
        printf(".");
        return res;
    }
    else {
        printf("Input problems. Bye.\n");
        exit(EXIT_FAILURE);
    }
}

/* Eliminate trailing spaces from str */
void trim_string(char *str){
    int i = strlen(str) - 1;
    while (i >= 0 && str[i] == ' '){
        str[i] = '\0';
        --i;
    }
}

/* Read data in p_array, and return the number of persons read */
int read_all(char *file_name, person p_array[]){
    FILE *fp = fopen(file_name, "r");
    int i = 0;
    if (fp != NULL){
        while(!(feof(fp))){
            p_array[i] = read_person(fp);
            ++i;
        }
        fclose(fp);
        return i;
    }
    else {
        printf("Cannot open file %s\n", file_name);
        exit(EXIT_FAILURE);
    }
}

void print_all(person all[], int n, char* file_name){
    int i;
    FILE *fp = fopen(file_name, "w");
    if (fp != NULL){
        for (i = 0; i < n; ++i)
            print_person(all[i], fp);
        fclose(fp);
    }
    else {
        printf("Cannot open file %s\n", file_name);
        exit(EXIT_FAILURE);
    }
}

void print_person(person p, FILE *fp){
    fprintf(fp, "%s: %s\n", p.bynavn, p.efternavn);
}

void print_person_full(person p, FILE *fp){
    fprintf(fp, "%s %s, %s %d, %d %s\n", p.efternavn, p.bynavn, p.vejnavn, p.vejnummer, p.postnummer, p.bynavn);
}

int person_compare(const void *p1, const void *p2){
    return strcmp(((person*)p1)->efternavn, ((person*)p2)->efternavn);
}