#include<stdio.h>
struct dt
{
    int mat[3][3];

};
typedef struct dt data;
void main()
{
    data d;
    d.mat[0][0]=1;
    d.mat[0][1]=0;
    d.mat[0][2]=0;
    d.mat[1][0]=0;
    d.mat[1][1]=1;
    d.mat[1][2]=0;
    d.mat[2][0]=0;
    d.mat[2][1]=0;
    d.mat[2][2]=1;
    printf("Given matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",d.mat[i][j]);
        }
        printf("\n");
    }

    if(isUnitMatrix(d)==1)
        printf("Given Matrix is UNIT\n");
    else
        printf("Given Matrix is NOT UNIT\n");
   getch();

}

 int  isUnitMatrix(data d)
  {
      int flag=1;
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
            if((i==j && d.mat[i][j]!=1) || (i!=j && d.mat[i][j]!=0))
            {
                flag=0;
                break;
            }
          }
          if(flag==0)
            break;
      }
     return flag;


  }
