#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    if(a>b)
    {

        printf("%d is greatest",a);
    }
    else
    {
        printf("%d is greatest",b);
    }
    getch();
}

