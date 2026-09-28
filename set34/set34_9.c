#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=10,b=20,*pa,*pb;
    pa=&a;
    pb=&b;
    printf("\nBefore swapping value of A is %d and value of B is %d",*pa,*pb);
    swapped(pa,pb);
    printf("\nAfter swapping value of A is %d and value of B is %d",*pa,*pb);
    getch();

}
void swapped(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
