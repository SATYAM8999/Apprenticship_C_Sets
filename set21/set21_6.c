#include<stdio.h>
void main()
{

    int matrix[3][3];
    matrix[0][0]=10;
    matrix[0][1]=20;
    matrix[0][2]=30;
    matrix[1][0]=40;
    matrix[1][1]=50;
    matrix[1][2]=60;
    matrix[2][0]=70;
    matrix[2][1]=80;
    matrix[2][2]=90;

    printf("Matrix element are\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d %d]=%d  ",i,j,matrix[i][j]);
        }
        printf("\n");
    }

  getch();
}

