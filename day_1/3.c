#include<stdio.h>
#include<conio.h>
int main()
{
int total_days,year=365,month=30,week=7,years,months,weeks,days;
printf("enter no of days:");
scanf("%d",&total_days);
years=total_days/year;
printf("years:%d\n",years);
months=years%year;
printf("months:%d\n",months);
weeks=months%week;
printf("weeks:%d\n",weeks);
days=weeks%week;
printf("days:%d",days);
return 0;
}
