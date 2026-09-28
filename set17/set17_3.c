#include<stdio.h>
void main()
{
    int n=10,i=1,sum=0;
    do
    {
         sum=sum+i;
         i++;

    }while(n>=i);
    printf("Sum of Numbers=%d",sum);

  getch();
}
