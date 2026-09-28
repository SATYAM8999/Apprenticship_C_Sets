#include<stdio.h>
void main()
{
    short int a,b;
    printf("enter two numbers\n");
    scanf("%hd%hd",&a,&b);
    short int average=(a+b)/2;
    printf("Average of two numbers=%hd",average);
    getch();

}
