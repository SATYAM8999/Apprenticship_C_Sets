#include<stdio.h>
void main()
{

    getSum();

  getch();
}
void getSum()
{
    int a,b;
    printf("Enter the Two numbers");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    printf("Sum= %d",sum);
}
