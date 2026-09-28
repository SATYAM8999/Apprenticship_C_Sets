#include<stdio.h>
void main()
{
    int n=5,i=1,fact=1;
    do
    {
        fact=fact*i;
        i++;
    }while(n>=i);
   printf("Factorial of number=%d",fact);

 getch();
}
