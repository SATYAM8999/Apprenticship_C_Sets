#include<stdio.h>
void main()
{
    int num;
    printf("enter the Number ");
    scanf("%d",&num);

    int status=isPrime(num);
    if(status==1)
    {
        printf("%d is prime Number",num);
    }
    else
    {
        printf("%d is NOT prime Number",num);
    }



 getch();

}
int isPrime(int n)
{
    int flag=1,result;
    for(int i=2;i<n;i++)
    {
      if(n%i==0)
      {
          flag=0;
          break;
      }
    }
  return flag;

}
