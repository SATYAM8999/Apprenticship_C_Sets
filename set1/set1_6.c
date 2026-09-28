#include<stdio.h>
void main()
{
    int a,b,reminder;
    printf("enter the two numbers for finding the reminder");
    scanf("%d%d",&a,&b);
    reminder=a%b;
    printf("Reminder of two numbers=%d\n",reminder);
    getch();


}
