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
Die Funktion überprüft, ob ein eingegebenes Datum gültig ist. Daten vor dem 1.1.1582 sind ungültig, genauso
wie alle Daten nach dem 31.12.2400
@param int day
@param int month
@param int year
@return 1 valid year ; 0 invalid year
*/
int exists_date(int,int,int);
/*
Die Funktion liest 3 Ganzzahlwerte (Integer) ein, für Tag, Monat und Jahr. Wenn das angegebene Datum
ungültig ist, wird erneut eingelesen, solange bis ein gültiges Datum eingegeben wurde.
@return struct(int day,int month,int year)
*/
//TODO
struct date input_date();
/*
Die Funktion überprüft, ob ein gegebenes Jahr nach den Regeln des gregorianischen Kalender ein Schaltjahr
ist. Bei Jahreszahlen vor dem Jahr 1582 wird ein Fehler zurückgegeben.
@param int year
@return int leap 1 for leapyear; 0 for no leapyear; -1 error
*/
int is_leapyear(int);
/*
Die Funktion bestimmt für einen gegebenen Monat eines gegebenen Jahres, wie viele Tage der Monat hat. Der
Wert des Monats muss zwischen 1 und 12 liegen. Schaltjahre werden berücksichtigt.
@param int month
@param int year
@return int added days of the month ; -1 error
*/
int get_days_for_month(int,int);
/*
Die Funktion ermittelt den Wochentag und gibt diesen zurück
@param int day
@param int month
@param int year
@return sunday-saturday or - 1 in case of an error
*/
void day_of_the_week(int,int,int);
/*
Die Funktion berechnet für ein gegebenes Datum des gregorianischen Kalenders bestehend aus Tag, Monat
und Jahr die Nummer des Tages, gezählt von Jahresbeginn (1. Januar) an. Schaltjahre werden bei der
Berechnung berücksichtigt. Ist das übergebene Datum ungültig, beträgt der Rückgabewert -1.
@param int day
@param int month
@param int year
@return int day of the year
*/
int day_of_the_year(int,int,int);


#endif // TIMELIB_H_INCLUDED
