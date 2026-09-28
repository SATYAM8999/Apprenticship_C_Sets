#include<stdio.h>
void main()
{
    int num=10;
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        int value=pow(3,i);
        sum=sum+value;

    }
    printf("sum=%d",sum);
    getch();

}
