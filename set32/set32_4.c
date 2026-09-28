#include<stdio.h>
struct dt
{
    int num;
};
typedef struct dt data;
void main()
{
    data mat[3][3];
    printf("Enter the martix elements:\n");
    for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             scanf("%d",&mat[i][j].num);
         }
     }
     printf("Matrix elements are\n");
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf(" %d ",mat[i][j].num);
         }
         printf("\n");
     }
     int r1,r2;
     printf("enter the row that to be swapped\n");
     scanf("%d%d",&r1,&r2);
     rowSwapped(mat,r1,r2);
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf(" %d ",mat[i][j].num);
         }
         printf("\n");
     }

}
void  rowSwapped(data d[3][3],int r1,int r2)
  {
      if((r1>=1 && r1<=3) || (r2>=1 && r2<=3))
     {
         r1=r1-1;
         r2=r2-1;
         for(int j=0;j<3;j++)
         {
             int temp=d[r1][j].num;
             d[r1][j].num=d[r2][j].num;
             d[r2][j].num=temp;
         }

     }

  }
