#include<stdio.h>
void main()
{
    unsigned long long int a,b;
    printf("enter two numbers\n");
    scanf("%llu%llu",&a,&b);
    printf("first number=%llu",a);
    printf("second number=%llu",b);
    unsigned long long int subtract=a-b;
    printf("subtraction of two numbers=%llu",subtract);
    getch();

}

