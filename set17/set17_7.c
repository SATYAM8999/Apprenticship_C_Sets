#include<stdio.h>
void main()
{
    int n=5,i=1;
    float sum=0;
    do
    {
        printf("%d\n",i);
        float value=(float)1/i;
        sum=sum+value;
        i++;
    }while(i<=n);
    printf("\nSum of series=%f",sum);

    getch();
}
