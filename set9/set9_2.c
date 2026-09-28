#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    if(a%2==0 && b%2==0)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;

    }
    printf("A=%d and =%d",a,b);
    getch();
}

