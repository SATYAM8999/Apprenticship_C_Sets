#include<stdio.h>
void main()
{
 int a,b,c;
 printf("enter the three side of triangle");
 scanf("%d%d%d",&a,&b,&c);
 (a==b && b==c)?printf("eduiletral Triangle"):
 (a==b || b==c || c==a)?printf("Isosceles Triangle"):printf("Scelene Triangle");
  getch();


}
