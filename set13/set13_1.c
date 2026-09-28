#include<stdio.h>
#include<math.h>
void main()
{
    int num=100;
   for(int i=1;i<=num;i++)
   {
       printf("\n%d",i);
       if(i%3==0)
       {
           printf("\n.....................................................");
       }
   }
}
