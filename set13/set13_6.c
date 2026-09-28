#include<stdio.h>
#include<math.h>
void main()
{
    int num=10;
    int x=2;
    float sum=0;
    for(int i=1;i<=num;i++)
    {
        printf("%d\n",i);
        float value=(float)1/pow(x,2);
        sum=sum+value;
        x=x+2;

    }
    printf("Sum of series =%f",sum);
    getch();
}
