#include<stdio.h>
void main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    switch(year%4)
    {
        case 0:printf("%d is a Leap year",year);
               break;
        default:printf("%d is Not a year",year);
               break;
    }
    getch();
}
