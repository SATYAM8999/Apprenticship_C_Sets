#include<stdio.h>
void main()
{
    int matrix[3][3]={{1,2,7},{2,0,9},{7,9,6}};
    printf("MAtrix Element are :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int result=isSymmetric(matrix);
    if(result==1)
    {
        printf("Given matrix is Symmetric!!");
    }
    else
    {

        printf("Given matrix is not symmetrix!!!");
    }

 getch();

}
int isSymmetric(int mat[3][3])
{
    int flag=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i!=j && mat[i][j]!=mat[j][i])
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
