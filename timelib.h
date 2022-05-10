/*
name:Philipp Tiemann
date:15.03.2021
program:TagDesJahres
*/

#ifndef TIMELIB_H_INCLUDED
#define TIMELIB_H_INCLUDED

struct date{
int day;
int month;
int year;
};
/*
Die Funktion �berpr�ft, ob ein eingegebenes Datum g�ltig ist. Daten vor dem 1.1.1582 sind ung�ltig, genauso
wie alle Daten nach dem 31.12.2400
@param int day
@param int month
@param int year
@return 1 valid year ; 0 invalid year
*/
int exists_date(int,int,int);
/*
Die Funktion liest 3 Ganzzahlwerte (Integer) ein, f�r Tag, Monat und Jahr. Wenn das angegebene Datum
ung�ltig ist, wird erneut eingelesen, solange bis ein g�ltiges Datum eingegeben wurde.
@return struct(int day,int month,int year)
*/
//TODO
struct date input_date();
/*
Die Funktion �berpr�ft, ob ein gegebenes Jahr nach den Regeln des gregorianischen Kalender ein Schaltjahr
ist. Bei Jahreszahlen vor dem Jahr 1582 wird ein Fehler zur�ckgegeben.
@param int year
@return int leap 1 for leapyear; 0 for no leapyear; -1 error
*/
int is_leapyear(int);
/*
Die Funktion bestimmt f�r einen gegebenen Monat eines gegebenen Jahres, wie viele Tage der Monat hat. Der
Wert des Monats muss zwischen 1 und 12 liegen. Schaltjahre werden ber�cksichtigt.
@param int month
@param int year
@return int added days of the month ; -1 error
*/
int get_days_for_month(int,int);
/*
Die Funktion ermittelt den Wochentag und gibt diesen zur�ck
@param int day
@param int month
@param int year
@return sunday-saturday or - 1 in case of an error
*/
void day_of_the_week(int,int,int);
/*
Die Funktion berechnet f�r ein gegebenes Datum des gregorianischen Kalenders bestehend aus Tag, Monat
und Jahr die Nummer des Tages, gez�hlt von Jahresbeginn (1. Januar) an. Schaltjahre werden bei der
Berechnung ber�cksichtigt. Ist das �bergebene Datum ung�ltig, betr�gt der R�ckgabewert -1.
@param int day
@param int month
@param int year
@return int day of the year
*/
int day_of_the_year(int,int,int);


#endif // TIMELIB_H_INCLUDED
