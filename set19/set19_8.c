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
    printf("Enter the of element to be rotated");
    int n;
    scanf("%d",&n);
   for(int k=1;k<=n;k++)
   {
       int temp=a[0];
       for(int i=0;i<size-1;i++)
       {
        a[i]=a[i+1];

       }
       a[size-1]=temp;

   }
    printf("\n Rotated array\n");
    for(int i=0;i<size;i++)
    {
        printf("%d, ",a[i]);
    }

    getch();

}
