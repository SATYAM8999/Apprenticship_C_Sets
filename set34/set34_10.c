#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[]={10,20,30,40,50,60};

    int sum=getSum(a);
    printf("Sum=%d",sum);

    getch();
}
int getSum(int *x)
{
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum=sum+ *(x+i);

    }
    return sum;
}
