#include<stdio.h>
int* getPrincipleDE(int [3][3]);

void main()
{
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Given Matrix are\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d ",matrix[i][j]);
        }
     printf("\n");
    }

    int *pde=getPrincipleDE(matrix);
    printf("\nThe Principle Diagonal Element:");
    for(int i=0;i<3;i++)
    {
            printf("%d ,",pde[i]);
    }

 getch();

}
int* getPrincipleDE(int mat[3][3])
{
    static int p[3];
    int position=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                p[position++]=mat[i][j];
            }
        }
    }
    return p;
}
