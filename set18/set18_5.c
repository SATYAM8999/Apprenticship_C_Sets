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
    printf("Array Element are\n");
    for(int i=0;i<size;i++)
    {
        printf("%d,",a[i]);
    }
    int biggest=a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]>biggest)
        {
            biggest=a[i];
        }
    }
    printf("\n Biggest Element in array=%d\n",biggest);

    getch();
}
