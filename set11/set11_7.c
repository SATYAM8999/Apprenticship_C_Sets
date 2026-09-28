#include<stdio.h>
void main()
{
    int month;
    printf("Enter the number in between 1 to 12");
    scanf("%d",&month);
    switch(month)
    {
        case 1:printf("january");
               break;
        case 2:printf("Faburary");
               break;
        case 3:printf("March");
               break;
        case 4:printf("April");
               break;
        case 5:printf("May");
               break;
        case 6:printf("Jun");
               break;
        case 7:printf("July");
               break;
        case 8:printf("Aujust");
               break;
        case 9:printf("September");
               break;
        case 10:printf("Octomber");
               break;
        case 11:printf("Novembery");
               break;
        case 12:printf("Decenber");
               break;
    }
    getch();
}



