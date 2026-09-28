#include<stdio.h>
void main()
{
    int f1=-1,f2=1;
    int n=10,count=0;
    while(count<n)
    {
        int f3=f1+f2;
        printf("%d,",f3);
        f1=f2;
        f2=f3;
        count++;

    }

    getch();
}
