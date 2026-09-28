#include<stdio.h>
#include<math.h>
void main()
{
    int num=1000,sum=0;
    float avg;

    for(int i=1;i<=num;i++)
    {
        sum=sum+i;


    }
    avg=sum/num;
    printf("Average=%f",avg);
  getch();
}
