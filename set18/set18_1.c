#include<stdio.h>
void main()
{

    int size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element of array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Array Element are\n");
    for(int i=0;i<size;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);

    }
    getch();
}
