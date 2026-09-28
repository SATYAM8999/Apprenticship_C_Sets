#include<stdio.h>
void main()
{
    int rows,columns;
    printf("Enter the Rows and columns of matrix");
    scanf("%d%d",&rows,&columns);
    int matrix[rows][columns];
    printf("Enter the elements of matrix");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The Matrix elements are\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            sum=sum+matrix[i][j];
        }
    }
    printf("Addition of matrix=%d",sum);
    getch();
}

