#include<stdio.h>
void main()
{
    int week;
    printf("Enter the number in between 1 to 7");
    scanf("%d",&week);
    switch(week)
    {
        case 1:printf("Sunday");
               break;
        case 2:printf("Monday");
               break;
        case 3:printf("Tuesday");
               break;
        case 4:printf("Wednesday");
               break;
        case 5:printf("Thusday");
               break;
        case 6:printf("Friday");
               break;
        case 7:printf("Saturday");
               break;
    }
    getch();
}
