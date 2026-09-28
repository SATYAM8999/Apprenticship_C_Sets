#include<stdio.h>
void main()
{
   int a[10]={1,2,3,4,5,6,7,8,9,10};
   printf("given array");
   for(int i=0;i<10;i++)
   {
       printf("%d ,",a[i]);
   }
   int s=getSum(a);
   printf("\nSum of Array=%d",s);
   getch();
}
int getSum(int x[])
{
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+x[i];
    }
    return sum;
}
