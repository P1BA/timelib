/*
name:Philipp Tiemann
date:15.03.2021
program:TagDesJahres
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day=31;
    int month=3;
    int year=2000;
    int tmp=0;

    tmp = day_of_the_year(day,month,year);
    printf("%d",tmp);
    return 0;
}
