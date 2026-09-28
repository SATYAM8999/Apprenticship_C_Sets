#include<stdio.h>
void main()
{
    unsigned short int a,b;
    printf("enter two numbers\n");
    scanf("%hu%hu",&a,&b);
    unsigned int addition=a+b;
    printf("addition of two numbers=%u",addition);
    getch();

}
