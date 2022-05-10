/*
name:Philipp Tiemann
date:15.03.2021
program:TagDesJahres
*/
#include <stdio.h>
#include <stdlib.h>
#include "timelib.h"
int main()
{

    struct date date=input_date();
    //int day=26;
    //int month=4;
    //int year=2022;
    int tmp=0;

    tmp = day_of_the_year(date.day,date.month,date.year);
    printf("%d\n",tmp);
    tmp=-1;
    day_of_the_week(date.year,date.month,date.day);

    return 0;
}
