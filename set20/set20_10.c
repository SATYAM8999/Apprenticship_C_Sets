#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("enter the element in array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array element are\n");
    for(int i=0;i<size;i++)
    {
        printf("%d,",a[i]);
    }
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];
    }

    float mean=(float)sum/size;
    printf("\n MEAN=%f",mean);
    float variance=0;

    for(int i=0;i<size;i++)
    {
        variance=variance+pow((a[i]-mean),2);
    }
    variance=variance/size;

    float standard_deviation=(float)sqrt(variance);

    printf("\n \nStandard Deviation=%f",standard_deviation);


    getch();
}
