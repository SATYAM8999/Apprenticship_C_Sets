#include<stdio.h>
void main()
{
    int *p;
    int mat[2][3]={{1,2,3},{4,5,6},{7,8,9}};
    p=mat;
    printf(" matrix elements are :\n");
    int k=0;
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<3;j++)
      {
          printf("%d ",*(p+k));
          k++;

      }
    printf("\n");
    }
    int *psum,sum=0;
    psum=&sum;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
          *psum+=(*(p+i));
        }
    }
    printf("Sum of Matrix Element is :%d\n",*psum);
    getch();

}

