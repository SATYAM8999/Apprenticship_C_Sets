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

    printf("Enter the rows that to be swapping");
    int r1,r2;
    scanf("%d%d",&r1,&r2);

    if((r1>=1 && r1<=row) && (r2>=1 && r2<=row))
    {
        r1=r1-1;
        r2=r2-1;
        for(int j=0;j<column;j++)
        {
            int temp=matrix[r1][j];
            matrix[r1][j]=matrix[r2][j];
            matrix[r2][j]=temp;
        }

        printf("Swapped Matrix\n");
        for(int i=0;i<row;i++)
         {
             for(int j=0;j<column;j++)
            {
                 printf("%d  ",matrix[i][j]);
            }
           printf("\n");
         }
  }
  else
    {
        printf("Involid Row");
    }

 getch();

}
