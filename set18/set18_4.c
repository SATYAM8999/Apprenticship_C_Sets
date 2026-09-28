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
    printf("\n Sum of element of array=%d\n",sum);
    getch();

}
