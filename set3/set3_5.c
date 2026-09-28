#include<stdio.h>
#include<math.h>
void main()
{
   int m,n,x,y,z;
   printf("Enetr the value of m,n,x,y and z");
   scanf("%d%d%d%d%d",&m,&n,&x,&y,&z);
   int result=pow((m+n),(x+y+z));
   printf("Evaluated Equation=%d",result);
   getch();

}
