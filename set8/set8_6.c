#include<stdio.h>
void main()
{
    char string[40];
    printf("enter the string\n");
    scanf("%[^\n]",&string);
    printf("string=%-15.9s",string);
    getch();
}
