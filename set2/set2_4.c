#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("before Swapping First number=%d and second number=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n After Swapping First number=%d and second number=%d",a,b);
    getch();

}
