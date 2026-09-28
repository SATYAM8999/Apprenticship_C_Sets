#include<stdio.h>
void main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("%d is a Leap year",year);
    }
    else
    {
        printf("%d is Not a Leap year",year);
    }
    getch();
}


