#include<stdio.h>
void main()
{
   int days;
   printf("Enter the days:");
   scanf("%d",&days);
   int year=days/365;
   int r1=days%365;
   int month=r1/30;
   int r2=r1%30;
   int week=r2/7;
   int day1=r2%7;
   printf("years=%d\n",year);
   printf("months=%d\n",month);
   printf("week=%d\n",week);
   printf("days=%d",day1);
   getch();


}
