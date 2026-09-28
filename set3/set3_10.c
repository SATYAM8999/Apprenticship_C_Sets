#include<stdio.h>
#include<math.h>
void main()
{
   int x,y,m,n,a,T,K;
   printf("Enetr the value of x,y,m,n,a,T,K");
   scanf("%d%d%d%d%d%d%d",&x,&y,&m,&n,&a,&T,&K);
   int power=pow((x+y),(m*n));
   int positive=abs(T*K);
   float root=(float)sqrt(2+8*a);
   float denominator=root*positive;
   float result=power/denominator;
   printf("Evaluated Equation=%f\n",result);
   getch();
}
