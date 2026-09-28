#include<stdio.h>
struct dt
{
    int num;

};
typedef struct dt data;
void swappedColumn(data [3][3],int ,int);
void main()
{
  int row=3,column=3;
  data mat[3][3];
  printf("Enter the elements in matrix:\n");
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          scanf("%d",&mat[i][j].num);
      }
  }
  printf("elements in matrix are:\n");
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          printf(" %d ",mat[i][j].num);
      }
      printf("\n");
  }
  swappedColumn(mat,row,column);
  //printf("\nMatrix after swapping columns %d and %d:\n", minIndex, maxIndex);
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", mat[i][j].num);
        }
        printf("\n");
    }



  getch();

}
void swappedColumn(data d[3][3],int numrow,int numcol)
{
    int columnsum[3]={0};
    for(int j=0;j<numcol;j++)
    {
        for(int i=0;i<numrow;i++)
        {
            columnsum[j]=columnsum[j]+d[i][j].num;

        }
    }
    //int columnsum[numcol];

     printf("Column sums:\n");
    for (int j = 0; j < numcol; j++)
    {
        printf("Column %d sum = %d\n", j, columnsum[j]);
    }
    int minIndex=0,maxIndex=0;
    for (int j=1;j<numcol;j++)
    {
        if(columnsum[j]<columnsum[minIndex])
        {
            minIndex=j;
        }
        if(columnsum[j]>columnsum[maxIndex])
        {
            maxIndex = j;
        }

      }
     printf("\nMin index=%d\n",minIndex);
     printf("\nmax index=%d\n",maxIndex);
     for (int i = 0; i < numrow; i++) {
        int temp = d[i][minIndex].num;
        d[i][minIndex].num = d[i][maxIndex].num;
        d[i][maxIndex].num = temp;
    }



}


