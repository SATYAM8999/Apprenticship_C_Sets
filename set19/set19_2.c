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
    int bpos=0,spos=0;
    int biggest=a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]>biggest)
        {
            biggest=a[i];
            bpos=i;
        }
    }
    int small=a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i]<small)
            {
                small=a[i];
                spos=i;
            }
    }
    printf("biggest number in array=%d\n",biggest);
    printf("smallest numbnerin array=%d\n",small);
        int temp;
        temp=a[bpos];
        a[bpos]=a[spos];
        a[spos]=temp;
        printf("Swapped element\n");
        for(int i=0;i<size;i++)
        {
            printf("%d,",a[i]);
        }
}
