#include<stdio.h>
void main()
{
    long double a,b;
    printf("enter two numbers\n");
    scanf("%Lf%Lf",&a,&b);
    long double division=a/b;
    printf("first number=%Lf",a);
    printf("second number=%Lf",b);
    printf("division  of two numbers=%Lf",division);
    getch();

}

