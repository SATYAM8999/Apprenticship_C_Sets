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
        printf("%d\n",a[i]);
    }
    printf("Enter the element that to be search\n");
    int element,position=-1;
    scanf("%d",&element);
    for(int i=0;i<size;i++)
    {
        if(element==a[i])
        {
            position=i;
            break;
        }
    }
    if(position!=-1)
    {
        printf("%d is fount in a[%d] location\n",element,position);

    }
    else
    {
      printf("Element is not Found");
    }

    getch();
}
