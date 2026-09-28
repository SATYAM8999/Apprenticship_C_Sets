#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the element of an array");
    int a[size+1];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array element Are\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Enter the element that to be Deleted\n");
    int element;
    scanf("%d",&element);
    int position=-1;
    for(int i=0;i<size;i++)
    {
        if(a[i]==element)
        {
            position=i;
            break;
        }
    }
    if(position!=-1)
    {
        for(int i=position;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
        printf("After Deleting array\n");
        for(int i=0;i<size-1;i++)
        {
        printf("%d\n",a[i]);
        }


    }
    else
    {
            printf("element in not present in array\n");
    }
}
