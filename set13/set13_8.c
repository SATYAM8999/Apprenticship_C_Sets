#include<stdio.h>
#include<math.h>
void main()
{
  int num=10;
  float sum=0;
  int f1=-1,f2=1,f3;

  for(int i=1;i<=num;i++)
  {
    f3=f1+f2;
    printf("%d\n",f3);
    float value=(float)1/pow(f3,2);
    sum=sum+value;
    f1=f2;
    f2=f3;

  }
  printf("Sum of series=%f",sum);
  getch();

}
