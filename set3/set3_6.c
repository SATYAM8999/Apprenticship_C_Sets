#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,x,y;
  printf("enter the value of a,b,x and y");
  scanf("%d%d%d%d",&a,&b,&x,&y);
  float base=(float)(a+b)/(x+y);
  float power=(float)1/(x+y);
  float result=pow(base,power);
  printf("Evaluated Equation=%f",result);
  getch();

}
