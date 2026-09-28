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

    printf("Enter the no of column for performing the addition");
    int col1;
    scanf("%d",&col1);

    int sum=0;
    if(col1>=1 && col1<=columns)
    {
        col1=col1-1;
        for(int i=0;i<rows;i++)
        {
            sum=sum+matrix[i][col1];
        }
    }
    printf("Addition of matrix=%d",sum);
    getch();
}


