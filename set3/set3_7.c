#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,x,y;
    printf("Enter the Value of a,b,c,x and y");
    scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);
    float base=(float)1/(a=b+c);
    float power=(float)1/(x+y);
    float result=pow(base,power);
    printf("Evaluated Equation=%f\n",result);
    getch();
}
