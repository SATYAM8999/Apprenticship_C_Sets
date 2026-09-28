#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the Element of array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    for(int i=0;i<size;i++)
    {
        printf("%d,",a[i]);

    }
    int positive_count=0,negative_count=0,zero_count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]>0)
        {
          positive_count=positive_count+1;
        }
        else if(a[i]<0)
        {

           negative_count=negative_count+1;
        }
        else
        {
            zero_count=zero_count+1;
        }
    }
    printf("\nPositive Count=%d",positive_count);
    printf("\nNegative Count=%d",negative_count);
    printf("\nZero Count=%d",zero_count);

    getch();
}
