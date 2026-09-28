#include<stdio.h>
void main()
{

    int a=100,b=20,c=30;
    printf("A is greastest =%d\n",(a>b && a>c));
    printf(" A is greatest =%d\n",(a>b || a>c));
    printf("A is greastest =%d\n",(b>a && b>c));
    printf("A is not equal to b=%d",(a!=b));
    getch();
}
