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
    int even_sum=0,odd_sum=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            even_sum=even_sum+a[i];
        }
        else
        {
            odd_sum=odd_sum+a[i];
        }
    }
    printf("\nEven sum=%d",even_sum);
    printf("\nOdd Sum=%d",odd_sum);

    getch();
}
