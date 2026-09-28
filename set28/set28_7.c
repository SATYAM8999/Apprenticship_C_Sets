#include<stdio.h>
#include<math.h>
void main()
{
    int x[10]={18,25,57,45,26,64,37,40,24,33};
    int y[10]={150,290,680,520,320,800,410,450,260,330};


    int sumx=0,sumy=0,sumxy=0,sumx2=0,sumy2=0;

    for(int i=0;i<10;i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumxy=sumxy+(x[i] * y[i]);
        sumx2=sumx2+(x[i] * x[i]);
        sumy2=sumy2+(y[i] * y[i]);
    }


    printf("\nSumX=%d",sumx);
    printf("\nSumY=%d",sumy);
    printf("\nSumXY=%d",sumxy);
    printf("\nSumx2=%d\n",sumx2);
    printf("SumY2=%d\n",sumy2);


    float value1=(float)(sumx*sumy)/10;
    float numerator=(float)(sumxy-value1);

    float temp1=(float)sumx2-(pow(sumx,2)/10);
    temp1=sqrt(temp1);

    float temp2=(float)sumy2-(pow(sumy,2)/10);
    temp2=sqrt(temp2);

    float pearson_corelation=(float)numerator/(temp1 * temp2);

    printf("\nPearson Corelation =%f",pearson_corelation);

    getch();
}
