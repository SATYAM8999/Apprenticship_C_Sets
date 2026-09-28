#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of the array");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements of array ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Array elements is:\n ");
    for(int i=0;i<size;i++)
    {
        printf("%d  ,",a[i]);

    }

   printf("\n\n\n------------Array Sorting Using Bubble Sort----------------");
   for(int i=0;i<size-1;i++)
   {
     for(int j=i+1;j<size;j++)
     {
         if(a[i]>a[j])
         {
             int temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }

   }
   printf("\n\nSorted Array elements Is:\n ");
    for(int i=0;i<size;i++)
    {
        printf("%d  ,",a[i]);

    }

  getch();
}
