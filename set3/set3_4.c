#include<stdio.h>
void main()
{
  int milimiter;
  printf("enter the value in milimiter");
  scanf("%d",&milimiter);
  int meter=milimiter/1000;
  int r1=milimiter%1000;
  int feet=r1/300;
  int r2=r1%300;
  int inches=r2/25;
  int r3=r2%25;
  int centimeter=r3/10;
  int milimeter1=r3%10;
  printf("Meters=%d\n",meter);
  printf("feets=%d\n",feet);
  printf("inches=%d",inches);
  printf("Centimeters=%d\n",centimeter);
  printf("Milimeters=%d\n",milimeter1);
  getch();
}
