#include<stdio.h>
void main()
{
    int row,column;
    printf("Enter the order of the matrix\n");
    scanf("%d%d",&row,&column);
    printf("\n Enter the elements of matrix");
    int matrix[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nelements of matrix are\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int p=0,s=row-1;
    printf("\nAfter swapping the diagonal matrix\n");
    for(int i=0;i<row;i++)
    {
        int temp=matrix[i][p];
            matrix[i][p]=matrix[i][s];
            matrix[i][s]=temp;
        p++;
        s--;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
