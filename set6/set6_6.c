#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the co-oeficent of quiation");
    scanf("%d%d%d",&a,&b,&c);
    int discriminant=(b*b)-(4*a*c);
    (discriminant>0)?printf("root is real\n"):(discriminant<0)?printf("root is imagenory\n"):printf("root is Equal to Zero");
    getch();


}
