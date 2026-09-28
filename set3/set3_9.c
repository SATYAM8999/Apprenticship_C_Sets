#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c;
  printf("Enetr the value of a,b and c");
  scanf("%d%d%d",&a,&b,&c);
  int positive=abs(c);
  float value=(float)(sqrt((a*a)+(b*b*b)));
  float result=positive+value;
  printf("Evaluated Equation=%f",result);
  getch();

}
