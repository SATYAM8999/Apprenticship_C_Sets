#include<stdio.h>
void main()
{
    int a[10]={123,345,342,21,34,543,567,32,1254,132};
    printf("Given numbers");

   for(int i=0;i<10;i++)
   {
       printf("%d ,",a[i]);
   }
   int s=getSum(a);
   printf("\nSum of big and small number in array is=%d",s);

  getch();

}
int getSum(int x[])
{
    int big=findBig(x);
    int small=findSmall(x);
    printf("\nbiggest number=%d",big);
    printf("\nsmall number=%d",small);
    int sum=big+small;
    return sum;
}
int findBig(int x[])
{
    int biggest=x[0];
    for(int i=1;i<10;i++)
    {
        if(x[i]>biggest)
        {
            biggest=x[i];
        }
    }
    return biggest;
}
int findSmall(int x[])
{
    int small=x[0];
    for(int i=1;i<10;i++)
    {
        if(x[i]<small)
        {
           small=x[i];
        }
    }
    return small;
}
