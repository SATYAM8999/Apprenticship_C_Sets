#include<stdio.h>
void main()
{

   int row,column;
   int size=row*column;
    printf("Enter the order of the matrix\n");
    scanf("%d%d",&row,&column);
    if(row==column)
    {

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
      int flag=1;
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<column;j++)
        {
            if((i==j && matrix[i][j]!=1) || (i!=j && matrix[i][j]!=0))
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        break;

      }
     if(flag==1)
     {
        printf("Given matrix is unit matrix");

     }
     else
     {
        printf("Given matrix is not unit matrix");
     }
    }
    else
    {
        printf("Matrix is not a Square matrix");
    }



   getch();
}
