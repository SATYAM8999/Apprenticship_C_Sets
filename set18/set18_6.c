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
    int even_count=0,odd_count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            even_count=even_count+1;
        }
        else
        {
            odd_count=odd_count+1;
        }
    }
    printf("\nEven Count=%d",even_count);
    printf("\nOdd Count=%d",odd_count);


    getch();

}


