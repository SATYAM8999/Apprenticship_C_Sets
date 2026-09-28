#include<stdio.h>
void main()
{
    int x[5]={2,3,5,7,9};
    int y[5]={4,5,7,10,15};

    int N=5;

    int saturday_sunshine=8;

    int sumx=0,sumy=0,sumxy=0,sumx2=0;
    for(int i=0;i<5;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+(x[i] * y[i]);
        sumx2=sumx2+(x[i] * x[i]);

    }

    printf("SumX=%d",sumx);
    printf("\nSumY=%d",sumy);
    printf("\nSumXY=%d",sumxy);
    printf("\nSumX2=%d",sumx2);



  int numerator=N*(sumxy)-(sumx * sumy);

  int denominator=N*sumx2-sumx*sumx;

  float m=(float)numerator/denominator;
  printf("Slope is :%f",m);


  float b=(sumy-(m*sumx))/N;
  printf("\nValue of B=%f",b);

  float ice_sold=m*saturday_sunshine+b;

  printf("\n Number of Ice Cream May Be sold in Saturday =%f",ice_sold);

 getch();
}
