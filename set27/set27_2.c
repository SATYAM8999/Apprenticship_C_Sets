#include<stdio.h>
void main()
{
    int a[10]={7,9,11,13,25,19,29,99,123,63};
    printf("Given numbers");

   for(int i=0;i<10;i++)
   {
       printf("%d ,",a[i]);
   }

   int prime_count=getPrime(a);
   printf("\nNumber of prime numbers in array=%d",prime_count);
getch();

}
int getPrime(int x[])
{
    int count=0;;
    for(int i=0;i<10;i++)
    {
        int flag=1;
        for(int j=2;j<x[i];j++)
        {
            if(x[i]%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            count=count+1;
        }
    }
    return count;
}
