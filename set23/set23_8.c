#include<stdio.h>
void main()
{
    int matrix[4][4];
    int f1=-1,f2=1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
           int f3=f1+f2;
           matrix[i][j]=f3;
           f1=f2;
           f2=f3;

        }
    }
    printf("Fibonacci Matrix\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


 getch();
}
