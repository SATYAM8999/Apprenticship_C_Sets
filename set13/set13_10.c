#include<stdio.h>
#include<math.h>
void main()
{
  int num=10;
  float sum=0;
  int sign=1;
  for(int i=1;i<=num;i++)
  {
      int x=i*sign;
      printf("%d\n",x);
      float value=(float)1/x;
      sum=sum+value;
      sign=-sign;
  }
  printf("sum of series=%f",sum);
  getch();
}
