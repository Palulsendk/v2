#include <stdio.h>
#include <stdlib.h>

#define DATE_MAX 1000

/* Date related types */
enum weekday {sunday, monday, tuesday, wednesday, thursday,
    friday, saturday};
typedef enum weekday weekday;

struct date {
    weekday day_of_week;
    int day;
    int month;
    int year;
};

typedef struct date date;

/* Funktion prototypes */

int leapYear(int);
int date_before(date, date);
weekday next_day_of(weekday);
void prnt_date(date);
char *name_of_weekday(date);
date tomorrow(date);

int main(void) {
    date calendar[DATE_MAX];
    char ignore;

    date first_date = {tuesday, 17, 11, 2015},
            last_date  = {thursday, 17, 11, 2016},
            current_date;
    int i = 0, j = 0;

    current_date = first_date;
    while (date_before(current_date, last_date)){
        calendar[i] = current_date;
        current_date = tomorrow(current_date);
        i++;
    }

    for (j = 0; j < i; j++){
        if (j % 20 == 0) {
            printf("More? - touch the enter key: ");
            scanf("%c", &ignore);
        }
        prnt_date(calendar[j]);

    }
}

/* Return the date after d */
date tomorrow(date d){
    date result;

    result = d;

    switch(d.month){
        case 1: case 3: case 5: case 7: case 8: case 10:
            if (d.day < 31)
                ++(result.day);
            else {result.day = 1; ++(result.month);}
            break;
        case 4: case 6: case 9: case 11:
            if (d.day < 30)
                ++(result.day);
            else {result.day = 1; ++(result.month);}
            break;
        case 2:
            if (d.day < (leapYear(d.year)? 29 : 28))
                ++(result.day);
            else {result.day = 1; result.month = 3;}
            break;
        case 12:
            if (d.day < 31)
                ++(result.day);
            else {result.day = 1; result.month = 1; (++result.year);}
            break;
        default: exit(-1);  break;
    }

    result.day_of_week = next_day_of(d.day_of_week);
    return result;
}

/* Is y a leapyear */
int leapYear(int y){
    int result;

    if (y % 400 == 0) result = 1;
    else if (y % 100 == 0) result = 0;
    else if (y % 4 == 0) result = 1;
    else result = 0;

    return result;
}

/* Is date d1 less than date d2 */
int date_before(date d1, date d2){
    return
            (d1.year < d2.year) ||
            (d1.year == d2.year && d1.month < d2.month) ||
            (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day);
}

weekday next_day_of(weekday d){
    return (weekday) (((int) d + 1) % 7);
}

/* Print date d */
void prnt_date(date d){
    printf("%9s %2i.%2i.%4i\n", name_of_weekday(d), d.day, d.month, d.year);
}

/* Return the name of the weekday of the date d */
char *name_of_weekday(date d){
    char *result;
    switch (d.day_of_week) {
        case sunday: result = "Sunday";
            break;
        case monday: result = "Monday";
            break;
        case tuesday: result = "Tuesday";
            break;
        case wednesday: result = "Wednesday";
            break;
        case thursday: result = "Thursday";
            break;
        case friday: result = "Friday";
            break;
        case saturday: result = "Saturday";
            break;
    }
    return result;
}   