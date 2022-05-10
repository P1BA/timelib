#include <stdio.h>
#include <stdlib.h>
#include "timelib.h"


/*
Die Funktion berechnet für ein gegebenes Datum des gregorianischen Kalenders bestehend aus Tag, Monat
und Jahr die Nummer des Tages, gezählt von Jahresbeginn (1. Januar) an. Schaltjahre werden bei der
Berechnung berücksichtigt. Ist das übergebene Datum ungültig, beträgt der Rückgabewert -1.
@param int day
@param int month
@param int year
@return int day of the year
*/
int day_of_the_year(int day, int month, int year)
{
    int ergebnis=0;
    if(exists_date(day,month,year))
    {

        ergebnis=ergebnis+(get_days_for_month(month,year)+day);

        return ergebnis;
    }
    return -1;
}


/*
Die Funktion liest 3 Ganzzahlwerte (Integer) ein, für Tag, Monat und Jahr. Wenn das angegebene Datum
ungültig ist, wird erneut eingelesen, solange bis ein gültiges Datum eingegeben wurde.

*/
//TODO

struct date input_date()
{
    struct date date;
    printf("please insert a day \n");
    scanf("%d",&date.day);
    printf("please insert a month \n");
    scanf("%d",&date.month);
    printf("please insert a year \n");
    scanf("%d",&date.year);

    return date;

}

/*
Die Funktion überprüft, ob ein gegebenes Jahr nach den Regeln des gregorianischen Kalender ein Schaltjahr
ist. Bei Jahreszahlen vor dem Jahr 1582 wird ein Fehler zurückgegeben.
@param int year
@return int leap 1 for leapyear; 0 for no leapyear; -1 error
*/
int is_leapyear (int year )
{
    int leap=0;
    if (year<1582)
    {
        return -1;
    }

    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        printf("%d is a leap year.\n", year);
        leap=1;
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.\n", year);
        leap=0;
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.\n", year);
        leap=1;
    }
    // all other years are not leap years
    else
    {
        printf("%d is not a leap year.\n", year);
        leap=0;
    }
    return leap;
}


/*
Die Funktion bestimmt für einen gegebenen Monat eines gegebenen Jahres, wie viele Tage der Monat hat. Der
Wert des Monats muss zwischen 1 und 12 liegen. Schaltjahre werden berücksichtigt.
@param int month
@param int year
@return int added days of the month ; -1 error


*/
int get_days_for_month (int month,int year)
{
    int days=0;

    if (is_leapyear(year)==1)
    {

        int tage_pro_monat[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
        for(int i=0; i<month-1; i++)
        {
            days=days+ tage_pro_monat[i];
        }
        return days;
    }
    else
    {
        int tage_pro_monat[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        for(int i=0; i<month-1; i++)
        {
            days=days+ tage_pro_monat[i];
        }
        return days;
    }
    return -1;

}


/*
Die Funktion überprüft, ob ein eingegebenes Datum gültig ist. Daten vor dem 1.1.1582 sind ungültig, genauso
wie alle Daten nach dem 31.12.2400
@param int day
@param int month
@param int year
@return 1 valid year ; 0 invalid year
*/
int exists_date(int day,int month,int year)
{
    if(day>31||month>12||year>2400)
    {
        return 0;
    }
    if(day<1||month<1||year<1582)
    {
        return 0;
    }
    return 1;
}

void day_of_the_week(int y,int m,int d)
{

    int tmp=-1;
    tmp=(d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7;


    switch(tmp)
    {
    case 0:
        printf("its a Sunday \n");
        break;
    case 1:
        printf("its a Monday \n");
        break;
    case 2:
        printf("its a Tuseday \n");
        break;
    case 3:
        printf("its a Wednsday \n");
        break;
    case 4:
        printf("its a Thursday \n");
        break;
    case 5:
        printf("its a Friday \n");
        break;
    case 6:
        printf("its a Saturday \n");
        break;
    }
}
