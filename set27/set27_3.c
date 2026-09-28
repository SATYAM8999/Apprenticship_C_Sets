#include<stdio.h>
void main()
{
    int a[10]={123,345,342,21,34,543,567,32,1254,132};
    printf("Given numbers");

   for(int i=0;i<10;i++)
   {
       printf("%d ,",a[i]);
   }

   getReverse(a);
   printf("\nReverse of Each number in array is:");
   for(int i=0;i<10;i++)
   {
       printf("%d ,",a[i]);
   }
 getch();
}
void getReverse(int x[])
{

    for(int i=0;i<10;i++)
    {
         int rev=0,num=x[i];
        while(num>0)
        {
            int rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        x[i]=rev;
    }
}
