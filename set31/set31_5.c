#include<stdio.h>
struct dt
{
    int big,small;
};
typedef struct dt data;
data getBigSmall(int [],int);
void main()
{
    int n=10;
    int a[10]={1,33,54,43,2,53,98,56,89,100};
    printf("Array elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
    data d1=getBigSmall(a,n);
    printf("\nBig =%d\n",d1.big);
    printf("\nsmall =%d\n",d1.small);
    getch();


}

data getBigSmall(int x[],int n)
{
    int big=0,small=0;
    big=x[0];
    for(int i=1;i<n;i++)
    {
        if(x[i]>big)
        {
            big=x[i];
        }
    }
    small=x[0];
    for(int i=1;i<n;i++)
    {
        if(x[i]<small)
        {
           small=x[i];
        }
    }
   data d;
   d.big=big;
   d.small=small;
   return d;
}
