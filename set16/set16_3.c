#include<stdio.h>
void main()
{
    int num=7895,sum=0;
    while(num>0)
    {
        int rem=num%10;
        sum=sum+rem;
        num=num/10;

    }
    printf("Sum of digits of given numbers=%d",sum);
    getch();

}
