#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter Two numbers");
  scanf("%d%d",&a,&b);

  int result=(a>b)?printf("A is greatest=%d",a):printf("B is greatest=%d",b);
  printf(result);
  getch();

}
