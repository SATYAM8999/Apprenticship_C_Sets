#include<stdio.h>
void main()
{
    int row1,column1,row2,column2;
    printf("Enter the Order of the Matrix 1:\n");
    scanf("%d%d",&row1,&column1);
    printf("Enter the Order of the Matrix 2:\n");
    scanf("%d%d",&row2,&column2);
    if(column1==row2)
    {
         int matrix1[row1][column1],matrix2[row2][column2];
         printf("\nEnter the elements of the matrix 1");
         for(int i=0;i<row1;i++)
         {
            for(int j=0;j<column1;j++)
            {
               scanf("%d",&matrix1[i][j]);
            }
         }
         printf("\nEnter the elements of the matrix 2");
         for(int i=0;i<row2;i++)
         {
            for(int j=0;j<column2;j++)
            {
               scanf("%d",&matrix2[i][j]);
            }
         }
         printf("\nelements of the matrix 1:\n");
         for(int i=0;i<row1;i++)
         {
            for(int j=0;j<column1;j++)
            {
               printf("%d ",matrix1[i][j]);
            }
           printf("\n");
         }
          printf("\nelements of the matrix 2:\n");
         for(int i=0;i<row2;i++)
         {
            for(int j=0;j<column2;j++)
            {
               printf("%d ",matrix2[i][j]);
            }
            printf("\n");
         }
         int product_matrix[row1][column2];
         for(int i=0;i<row1;i++)
         {
            for(int j=0;j<column2;j++)
            {

             product_matrix[i][j]=0;
             for(int k=0;k<column1;k++)
             {
                 product_matrix[i][j]=product_matrix[i][j]+(matrix1[i][k] * matrix2[k][j]);
             }
           }
         }
         printf("\n\nThe Multiplication OF Two Matix is:\n");
         for(int i=0;i<row1;i++)
         {
            for(int j=0;j<column2;j++)
            {
               printf("%d ",product_matrix[i][j]);
            }
            printf("\n");
         }
    }
    else
    {
        printf("The Multiplication is Not Possible !! please try again ");

    }
 getch();

}
