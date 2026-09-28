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

    printf("Reversed number\n");
    int rev=0;int num;
    for(int i=0;i<size;i++)
    {
      int rev=0,num=a[i];
      while(num>0)
      {
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;
      }
       a[i]=rev;
    }

    for(int i=0;i<size;i++)
    {
        printf("%d , ",a[i]);

    }



}
