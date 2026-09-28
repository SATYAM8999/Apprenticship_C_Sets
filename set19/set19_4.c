#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the element of an array");
    int a[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array element Are\n");
    for(int i=0;i<size;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("Reversed number\n");
    int last_element=size-1;
    for(int i=0;i<size/2;i++)
    {
        int temp;
        temp=a[i];
        a[i]=a[last_element];
        a[last_element]=temp;

        last_element--;

    }
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);

    }



}

