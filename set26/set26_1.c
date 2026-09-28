#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    int sum=getSum(a,b);
    printf("\nSum =%d",sum);

   getch();
}
int getSum(int x,int y)
{
    int z=x+y;
    return z;
}
