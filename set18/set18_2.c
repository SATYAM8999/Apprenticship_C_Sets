#include<stdio.h>
void main()
{
    int a[5];
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;
    printf("Array Element are\n");
    for(int i=0;i<5;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    getch();
}
