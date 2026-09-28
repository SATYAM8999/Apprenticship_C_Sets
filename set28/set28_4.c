#include<stdio.h>
#include<math.h>
float* findTraceNormal(int [3][3]);
void main()
{
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    float *res=findTraceNormal(matrix);
    printf("\nTrace=%f",res[0]);
    printf("\nNormal=%f",res[1]);

    getch();
}
float* findTraceNormal(int mat[3][3])
{
    float trace=0;
    float normal=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          if(i==j)
          {
              trace=trace+mat[i][j];
          }
          normal=normal+pow(mat[i][j],2);
        }
    }
    float final_normal=sqrt(normal);
    static float data[2];
    data[0]=trace;
    data[1]=final_normal;


    return data;

}
