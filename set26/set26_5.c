#include<stdio.h>
void main()
{
    int num;
    printf("enter the Number");
    scanf("%d",&num);
    int addition=getDigitSum(num);
    printf("Digit Sum= %d",addition);

 getch();
}
int getDigitSum(int n)
{
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        sum=sum+rem;
        n=n/10;


    }
     return sum;
}
