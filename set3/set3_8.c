#include<stdio.h>
#include<math.h>
void main()
{
    int m,n,p,a,b,c,x,y;
    printf("Enetr the value of m,n,p,x,y,a,b,c");
    scanf("%d%d%d%d%d%d%d%d",&m,&n,&p,&a,&b,&c,&x,&y);
    float numerator=(float)pow(sqrt(m+n+p),(x+y));
    float denominator=(float)(a+b+c)/(m+n);
    float result=numerator/denominator;
    printf("Evaluated Equation=%f",result);
    getch();

}
