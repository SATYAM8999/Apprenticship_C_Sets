#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three Co-ordinates of Quadratic equation");
    scanf("%d%d%d",&a,&b,&c);

    int distriminant=b*b-(4*a*c);
    if( distriminant>0)
        printf("Root is real");
    else if( distriminant<0)
        printf("Root is Imaginary");
    else
        printf("Root is Equal to zero");

    getch();



}
