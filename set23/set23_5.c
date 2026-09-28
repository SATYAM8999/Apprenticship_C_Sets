#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of matrix");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element of matrix");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Array element are\n");

    for(int i=0;i<size;i++)
    {
        printf("%d ,",a[i]);
    }
    printf("\n Enter the rows are columns for creating matrix");
    int row,column;
    scanf("%d%d",&row,&column);
    int matrix[row][column],p=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           matrix[i][j]=a[p++];
        }
    }
    printf("\nafter converting array into matrix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

getch();
}

