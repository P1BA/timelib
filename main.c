/*
name:Philipp Tiemann
date:15.03.2021
program:TagDesJahres
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tage_pro_monat[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int y =0;
    int month =0;
    int day=0;
    int ly=-1; //leap year flag
    int days=0; //ergebnis
    printf("bitte geben sie das gewünschte jahr ein \n");
    scanf("%d",&y);
    printf("%d Jahr\n",y);
    //leap year check
    if(y % 4== 0 && y % 100 != 0 || y % 400 == 0){
        ly=1;
    }else{
        ly=0;
    }
    //leap year correction
    if(ly==1)
    {
        tage_pro_monat[2] = 29 ;
    }

    do
    {
        scanf("%d",&month);
    }
    while(12 < month || month<0);

    printf("%d Monat \n",month);

    do
    {
        scanf("%d",&day);
    }
    while(tage_pro_monat[month]<day||day<0);
    printf("%d Tag \n",day);
    printf("%d %d %d\n",day,month,y);

    for (int i =0; i<month-1; i++)
    {
        days=days+tage_pro_monat[i];
        printf("%d tage promonat \n",tage_pro_monat[i]);
        printf("%d days\n",days);
    }
    days=days+day;
    printf("%d Tage des Jahres \n",days);
    return 0;
}
