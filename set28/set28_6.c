#include<stdio.h>
#include<math.h>
float* findMeanDeviation(int [],int );
void main()
{
    int a[5]={1,2,3,4,5};
    int num=5;
    for(int i=0;i<5;i++)
    {
        printf("%d,",a[i]);
    }

    float *res=findMeanDeviation(a,num);
    printf("\n\nMean =%f\n",res[0]);
    printf("\nStandard Deviation=%f",res[1]);
    getch();
}
float* findMeanDeviation(int x[],int n)
{
    int mean=0;
    float variance=0;
    for(int i=0;i<n;i++)
    {
       mean=mean+x[i];
    }
    float final_mean=(float)mean/n;

    for(int i=0;i<n;i++)
    {
        variance = variance + (pow((final_mean - x[i]), 2));
    }

    variance = variance / n;
    float final_variance = sqrt(variance);
    static float data[2];
    data[0]=final_mean;
    data[1]=final_variance;

  return data;

}
