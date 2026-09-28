#include<stdio.h>
#include<math.h>
void main()
{

int num=10;
float sum=0;
for(int i=1;i<=num;i++)
{
    printf("%d\n",i);
    float value=(float)1/pow(i,2);
    sum=sum+value;
}
printf("sum of series=%f",sum);
getch();
}
