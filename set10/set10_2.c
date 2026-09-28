
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbrs");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greatest",a);
        }
        else
        {
            printf("%d is greatest",b);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is greatest",b);
        }
        else
        {
            printf("%d is greatest",c);
        }
    }
    getch();
}
