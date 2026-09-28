#include<stdio.h>
void main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
       for(int sp=1;sp<=(n-i);sp++)
       {
           printf(" ");
       }
       for(int j=1;j<=i;j++)
       {
            printf("%d",i);

       }
     printf("\n");
    }
    getch();
}
