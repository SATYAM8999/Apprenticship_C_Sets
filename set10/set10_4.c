#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
    {
        printf("The Triangle is Formed");
        if(a==b && a==c)
        {
            printf("\n Eduilateral  Triangle");
        }
        else if(a==b || b==c || c==a)
        {
            printf("\n Isoscles  Triangle");
        }
        else
        {
            printf("\n Scelene Triangle");
        }
    }
    else
    {
        printf("The Triangle is not formed");
    }
    getch();
}
