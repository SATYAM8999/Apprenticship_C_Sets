
#include<stdio.h>
void main()
{
    int row,column;
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

    printf("The element that are above principle of diagonal matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(i<j)
            {
                printf("%d",matrix[i][j]);

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
