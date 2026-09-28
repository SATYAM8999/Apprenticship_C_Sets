#include<stdio.h>
void main()
{
    int num;
    printf("Enter the Two numbers");
    scanf("%d",&num);

    int result=getSum(num);

    printf("Sum of Number Which are divisible by 9 And not divisible by 6=%d",result);

  getch();
}
int getSum(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        if(i%9==0 && i%6!=0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
