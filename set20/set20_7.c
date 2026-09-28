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
    printf("\n\narray element are\n");
    for(int i=0;i<size;i++)
    {
        printf("%d,",a[i]);
    }

    int assumpsion=1;

    for(int i=0;i<size-1;i++)
    {
        if(a[i]>a[i+1])
        {
            assumpsion=0;
            break;
        }
    }
    if(assumpsion==1)
    {
        printf("\n \nThe Given Array Is sorted In Ascending Order");
    }
    else
    {
        printf("\n\nThe Given Array Is not Sorted In Ascending Order");
    }


getch();

}
