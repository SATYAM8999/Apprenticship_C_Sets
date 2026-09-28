#include<stdio.h>
void main()
{

   int row,column;
   int size=row*column;
    printf("Enter the order of the matrix\n");
    scanf("%d%d",&row,&column);
    printf("\nEnter the elements of matrix");
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

    int a[size],p=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           a[p++]=matrix[i][j];
        }
    }
    printf("\n Array elements are ");
   for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           printf("%d ",matrix[i][j]);
        }
    }

   getch();
}
