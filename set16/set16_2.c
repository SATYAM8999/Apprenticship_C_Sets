#include<stdio.h>
void main()
{
    int n=5;
    int sum=0;
    while(n>0)
    {
        sum=sum+n;
        n--;
    }
    printf("Sum of Numbers=%d",sum);
    getch();

}
