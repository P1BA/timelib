/*
name:Philipp Tiemann
date:15.03.2021
program:TagDesJahres
*/
#include <stdio.h>
#include <stdlib.h>
int exists_date(int,int,int);
int input_date(int,int,int);
int is_leapyear(int);
int get_days_for_month(int,int);



/*
Die Funktion berechnet f�r ein gegebenes Datum des gregorianischen Kalenders bestehend aus Tag, Monat
und Jahr die Nummer des Tages, gez�hlt von Jahresbeginn (1. Januar) an. Schaltjahre werden bei der
Berechnung ber�cksichtigt. Ist das �bergebene Datum ung�ltig, betr�gt der R�ckgabewert -1.
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
Die Funktion liest 3 Ganzzahlwerte (Integer) ein, f�r Tag, Monat und Jahr. Wenn das angegebene Datum
ung�ltig ist, wird erneut eingelesen, solange bis ein g�ltiges Datum eingegeben wurde.
*/
int input_date(int day,int month,int year)
{
    return 0;
}


/*
Die Funktion �berpr�ft, ob ein gegebenes Jahr nach den Regeln des gregorianischen Kalender ein Schaltjahr
ist. Bei Jahreszahlen vor dem Jahr 1582 wird ein Fehler zur�ckgegeben.
*/
int is_leapyear (int year )
{
    if (year<1582)
    {
        return -1;
    }

    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        printf("%d is a leap year.\n", year);
        return 1;
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.\n", year);
        return 0;
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.\n", year);
        return 1;
    }
    // all other years are not leap years
    else
    {
        printf("%d is not a leap year.\n", year);
        return 0;
    }
}


/*
Die Funktion bestimmt f�r einen gegebenen Monat eines gegebenen Jahres, wie viele Tage der Monat hat. Der
Wert des Monats muss zwischen 1 und 12 liegen. Schaltjahre werden ber�cksichtigt.
*/
int get_days_for_month (int month,int year)
{
    int days=NULL;

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
Die Funktion �berpr�ft, ob ein eingegebenes Datum g�ltig ist. Daten vor dem 1.1.1582 sind ung�ltig, genauso
wie alle Daten nach dem 31.12.2400.
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
int main()
{
    int day=31;
    int month=3;
    int year=2000;
    int tmp=NULL;


    tmp = day_of_the_year(day,month,year);
    printf("%d",tmp);
    return 0;
}
