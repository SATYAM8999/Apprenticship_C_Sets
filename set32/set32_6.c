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
     swapPdeToSde(mat);
     printf("After Swapping Principle diagonal elements to secondary diagonal elements:\n");
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf(" %d ",mat[i][j].num);
         }
         printf("\n");
     }

}
void swapPdeToSde(data d[3][3])
 {
      int p=0,s=2;
    for(int i=0;i<3;i++)
    {
      int temp=d[i][p].num;
      d[i][p].num=d[i][s].num;
      d[i][s].num=temp;

    }
    p++;
    s--;

 }

