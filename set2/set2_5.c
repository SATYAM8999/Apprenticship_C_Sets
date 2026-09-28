#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("before Swapping First number=%d and second number=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After Swapping First number=%d and second number=%d",a,b);
    getch();

}


