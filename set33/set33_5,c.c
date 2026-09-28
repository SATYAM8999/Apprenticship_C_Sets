#include<stdio.h.>
void main()
{
    int *p1,*p2,*sum;
    int a,b,s;
    *p1=&a;
    *p2=&b;
    *sum=&s;
    printf("Enter the two numbers:\n");
    scanf("%d%d",p1,p2);
    *sum=*p1+*p2;
    printf("\nsum is%d\n",*sum);
    getch();
}
