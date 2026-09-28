#include<stdio.h>
#include<math.h>
void main()
{
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Matrix is \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");

    }

    int trace=0;
    int normal_sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(i==j)
           {

               trace=trace+matrix[i][j];
           }
          normal_sum=(normal_sum+pow(matrix[i][j],2));
        }

    }
    float final_sum=(float)sqrt(normal_sum);
    printf("\ntrace of the matrix=%d",trace);
    printf("\nnormal sum of the matrix=%f",final_sum);

getch();
}
