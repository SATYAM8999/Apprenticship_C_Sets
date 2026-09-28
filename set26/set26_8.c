#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    int result=getReverse(num);
    printf("reverse number of %d is %d",num,result);

 getch();


}
int getReverse(int n)
{
    int rev=0;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
