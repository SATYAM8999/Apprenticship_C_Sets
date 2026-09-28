#include<stdio.h>
void main()
{

  int s=getSum();
  printf("Sum= %d",s);

  getch();

}int getSum(int x,int y)
{
    int a,b;
    printf("Enter the Two numbers");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    return sum;
}
