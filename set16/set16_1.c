#include<stdio.h>
void main()
{
    int n=5;
    int fact=1;
    while(n>=2)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial number=%d",fact);
    getch();
}
