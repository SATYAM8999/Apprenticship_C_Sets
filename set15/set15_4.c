#include<stdio.h>
void main()
{
    int n=5;
    for(int i=n;i>=1;i--)
    {
      for(int sp=1;sp<i;sp++)
      {
          printf(" ");
      }
      for(int j=n;j>=i;j--)
      {
        printf("%d",j);
      }
     printf("\n");
    }
}
