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

    int first_size=size/2;
    int second_size=size-first_size;

    int FA[first_size];
    int SA[second_size];
    int pos=0;
    for(int i=0;i<size;i++)
    {
        if(i<first_size)
        {
            FA[i]=a[i];
        }
        else
        {
           SA[pos++]=a[i];
        }
    }
    printf("\n\nFirst Array=");
    for(int i=0;i<first_size;i++)
    {
        printf("%d ,",FA[i]);
    }
     printf("\n\nSecond Array=");
    for(int i=0;i<second_size;i++)
    {
        printf("%d ,",SA[i]);
    }

    getch();
}
