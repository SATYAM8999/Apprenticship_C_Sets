#include<stdio.h>
void main()
{
    int num=6745,rev=0;
    int temp=num;
    while(num>0)
    {
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("reverse number of %d is %d",temp,rev);
    getch();
}
