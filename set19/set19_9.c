#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of an  array");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements of an array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("%d , ",a[i]);
    }


    printf("Enter the number of element to be rotated \n");
    int n;
    scanf("%d",&n);
   for(int k=1;k<=n;k++)
   {
       int temp=a[size-1];
    for(int i=size-1;i>0;i--)
    {
        a[i]=a[i-1];

    }
    a[0]=temp;
   }


    printf("Rotated Element\n");
    for(int i=0;i<size;i++)
    {
        printf("%d , ",a[i]);
    }

    getch();
}
