#include<stdio.h>
void main()
{
    int n=1;
    do
    {
      if(n%4==0 && n%5==0)
      {
        printf("%d\n",n);
      }
      n++;

    }while(n<=100);
  getch();
}
