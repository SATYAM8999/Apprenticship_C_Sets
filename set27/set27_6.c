#include<stdio.h>
void main()
{
    int a[10]={20,22,100,4,9,87,54,81,11,21};
    printf("Given Array Is:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ,",a[i]);
    }


    sortElement(a,10);


    printf("\n\n\nsorted Array is:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ,",a[i]);
    }
 getch();
}
void sortElement(int x[],int n)
{

  for(int i=0;i<n-1;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(x[i]>x[j])
          {
              int temp=x[i];
              x[i]=x[j];
              x[j]=temp;
          }
      }
  }
}
