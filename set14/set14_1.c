#include<stdio.h>
void main()
{
    int n=10;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int product=i*j;

           if(product<10)
           {
            printf("0%d ",product);
           }
           else
            {
               printf("%d ",product);
            }

        }
        printf("\n");
    }
    getch();
}
