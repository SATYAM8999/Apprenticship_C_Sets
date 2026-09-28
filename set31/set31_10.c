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
    d.mat[0][1]=2;
    d.mat[0][2]=3;
    d.mat[1][0]=2;
    d.mat[1][1]=5;
    d.mat[1][2]=7;
    d.mat[2][0]=3;
    d.mat[2][1]=7;
    d.mat[2][2]=9;
    printf("Given matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",d.mat[i][j]);
        }
        printf("\n");
    }

    if(isSymmetric(d)==1)
        printf("Given Matrix is Symmetric\n");
    else
        printf("Given Matrix is NOT Symmetric\n");
   getch();

}

 int  isSymmetric(data d)
  {
      int flag=1;
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
            if(i==j&& d.mat[i][j]!=d.mat[j][i])
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

