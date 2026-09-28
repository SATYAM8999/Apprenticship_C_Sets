#include<stdio.h>
void main()
{
    int n=100,odd_sum=0,even_sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even_sum=even_sum+i;
        }
        continue;
        odd_sum=odd_sum+i;
    }
    printf("Even sum=%d",even_sum);
    printf("\nOdd sum=%d",odd_sum);

    getch();
}
