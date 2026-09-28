#include<stdio.h>
#include<math.h>
void main()
{
    int num=5;
    int sum=0;
    for(int i=1;i<=num;i++)
    {
       int fact=1,n=i;
     for(int j=1;j<=n;j++)
      {
        fact=fact*j;
        sum=sum+fact;
      }
    printf("Factorial number=%d\n",fact);

    }
    printf("sum of factorial number=%d",sum);
  getch();


}
