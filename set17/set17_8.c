#include<stdio.h>
#include<math.h>
void main()
{
  int n=5,i=1;
  float sum=0;
  do
  {
      printf("%d\n",i);
      float value=(float)1/pow(i,i);
      sum=sum+value;
      i++;
  }while(i<=n);
  printf("Sum of series =%f",sum);

  getch();
}
