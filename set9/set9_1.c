#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    if(b!=0)
    {
        float result=(float)a/b;
        printf("result=%f",result);
    }
    getch();
}
