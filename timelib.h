#ifndef TIMELIB_H_INCLUDED
#define TIMELIB_H_INCLUDED

struct date{
int day;
int month;
int year;
};

int exists_date(int,int,int);
struct date input_date();
int is_leapyear(int);
int get_days_for_month(int,int);
void day_of_the_week(int,int,int);


#endif // TIMELIB_H_INCLUDED
