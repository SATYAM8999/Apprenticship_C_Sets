#include<stdio.h>
void main()
{
    int row1,column1,row2,column2;
    printf("Enter the row and columns of matrix");
    scanf("%d%d",&row1,&column1);
    printf("Enter the row and columns of matrix");
    scanf("%d%d",&row2,&column2);
    if((row1==row2) && (column1==column2))
    {

         int matrix1[row1][column1],matrix2[row2][column2];

         printf("Enter the elements of First matrix");
         for(int i=0;i<row1;i++)
         {
            for(int j=0;j<column1;j++)
            {
               scanf("%d",&matrix1[i][j]);
            }
         }

         printf("Enter the elements of second matrix");
         for(int i=0;i<row2;i++)
         {
            for(int j=0;j<column2;j++)
            {
               scanf("%d",&matrix2[i][j]);
            }
         }
         int sumMatrix[row1][column1];
         for(int i=0;i<row1;i++)
         {
            for(int j=0;j<column1;j++)
            {
              sumMatrix[i][j]=matrix1[i][j]+matrix2[i][j];
            }
         }
          printf(" First matrix is\n \n");
         for(int i=0;i<row1;i++)
         {
            for(int j=0;j<column1;j++)
            {
               printf("%d  ",matrix1[i][j]);
            }
            printf("\n");
         }
          printf("Second matrix is\n \n");
         for(int i=0;i<row1;i++)
         {
            for(int j=0;j<column1;j++)
            {
               printf("%d  ",matrix2[i][j]);
            }
            printf("\n");
         }
          printf("Addition matrix is \n");
         for(int i=0;i<row1;i++)
         {
            for(int j=0;j<column1;j++)
            {
               printf("%d  ",sumMatrix[i][j]);
            }
            printf("\n");
         }
    }
    else
    {
        printf("The matrix addition is not possible !! please try again");
    }
  getch();
}
