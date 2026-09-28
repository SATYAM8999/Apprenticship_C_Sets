#include<stdio.h>
void main()
{

    int a[10],i;
    int *p,*big,*small;
    p=a;

    printf("Enter the array element");
    for(int i=0;i<10;i++)
    {
        scanf("%d",p+i);

    }
    big=&a;
    small=&a;

    for(int i=0;i<10;i++)
    {
      if(*(p+i)>*big)
      {

          big=(p+i);
      }
    }

     for(int i=0;i<10;i++)
    {
      if(*(p+i)<*small)
      {
          small=(p+i);
      }
    }
    printf("Big element in array is:%d\n",*big);
    printf("Small element in array is:%d\n",*small);

  getch();
}



