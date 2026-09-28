#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Three numbers");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)?printf("A is greatest=%d",a):(b>a && b>c)?printf("B is greatest%d",b):(c>a && c>b)?printf(" C is greatest"):printf("All numbers are Equals");
    getch();

}
