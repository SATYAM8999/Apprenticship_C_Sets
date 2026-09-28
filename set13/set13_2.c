#include<stdio.h>
#include<math.h>
void main()
{
    int num=10,f1=-1,f2=1,f3;
   for(int i=2;i<=num;i++)
   {
      f3=f1+f2;
      printf("%d\n",f3);
      f1=f2;
      f2=f3;
   }
   getch();
}


