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
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
          printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Enter the columns that to be interchange");
    int col1,col2;
    scanf("%d%d",&col1,&col2);
    if((col1>=1 && col1<=column) && (col2>=1 && col2<=column))
       {
           col1=col1-1;
           col2=col2-1;
           for(int i=0;i<row;i++)
           {
               int temp=matrix[i][col1];
               matrix[i][col1]=matrix[i][col2];
               matrix[i][col2]=temp;
           }

    printf("After swapping matrix is\n");

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
        printf("Involid colsumn !! wapping is not possible");
    }


  getch();
}

