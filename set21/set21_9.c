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

    printf("Enter the no of rows for performing the addition");
    int row1;
    scanf("%d",&row1);

    int sum=0;
    if(row1>=1 && row1<=rows)
    {
        row1=row1-1;
        for(int j=0;j<columns;j++)
        {
            sum=sum+matrix[row1][j];
        }
    }
    printf("Addition of matrix=%d",sum);
    getch();
}


