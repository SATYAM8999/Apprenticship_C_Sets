#include<stdio.h>
void main()
{

    int matrix[3][3]={{10,20,30},{40,50,60},{70,80,90}};

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


