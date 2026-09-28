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
    printf("Enter the element that to be inserted and also enter position\n");
    int element,position;
    scanf("%d%d",&element,&position);
    position=position-1;

    for(int i=size;i>position;i--)
    {
        a[i+1]=a[i];
    }
    a[position]=element;

    printf("After inserted element\n");
    for(int i=0;i<size+1;i++)
    {
        printf("%d ,",a[i]);

    }

    getch();
}
