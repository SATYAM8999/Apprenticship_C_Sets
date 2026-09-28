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
    printf("\nThe Element that are Divisible by 9 and Not Divisible by 6\n");
    for(int i=0;i<size;i++)
    {
        if(a[i]%9==0 && a[i]%6!=0)
        {
            printf("%d,",a[i]);
        }
    }
    getch();
}
