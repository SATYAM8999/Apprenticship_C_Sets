#include<stdio.h>
void main()
{
   int number=100;
   for(int i=2;i<=number;i++)
   {
    int num=i,flag=1;
    for(int j=2;j<num;j++)
     {
      if(num%j==0)
       {
          flag=0;
          break;
       }
     }


     if(flag==1)
     {
       printf("%d \n",i);

     }
   }

getch();
}

