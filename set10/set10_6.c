#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
   if(((a+b)>c)&&((b+c)>a)&&((c+a)>b))
    {
        printf("The Triangle is Formed");
    }
    else
    {
        printf("The Triangle is not Formed ");
    }
    getch();
}
