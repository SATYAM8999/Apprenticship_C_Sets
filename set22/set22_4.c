#include<stdio.h>
void main()
{
    int row,column;
    printf("Enter the rows and columns in matrix ");
    scanf("%d%d",&row,&column);
    int matrix[row][column];
    printf("Enter the elements of array");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
          scanf("%d",&matrix[i][j]);

        }
    }
    printf("Matrix is\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
          printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("Principle Diagonal Matrix are\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(i==j)
            {
                printf("%d ",matrix[i][j]);
            }
            else
            {
                   printf(" ");
            }
        }
        printf("\n");
    }


  getch();
}
