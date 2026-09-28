#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the Two numbers");
    scanf("%d%d",&a,&b);

    getSum(a,b);
    getch();

}
void getSum(int x,int y)
{
    int z=x+y;
    printf("Sum= %d",z);
}
