#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the four numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("%d is greatest",a);
    }
    if(b>a && b>c && b>d)
    {
        printf("%d is greatest",b);
    }
    if(c>a && c>b && c>d)
    {
        printf("%d is greatest",c);
    }
    else
    {
        printf("%d is greatest",d);
    }
    getch();
}
