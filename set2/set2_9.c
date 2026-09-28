#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("Enter the value of three sides");
    scanf("%d%d%d",&a,&b,&c);
    float s=(float)(a+b+c)/2;
    float area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle=%f\n ",area);
    getch();

}
