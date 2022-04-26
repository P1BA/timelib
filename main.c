/*
name:Philipp Tiemann
date:15.03.2021
program:TagDesJahres
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day=26;
    int month=4;
    int year=2022;
    int tmp=0;

    tmp = day_of_the_year(day,month,year);
    printf("%d\n",tmp);
    tmp=-1;
    day_of_the_week(year,month,day);

    return 0;
}
