#include<stdio.h>
void main()
{

    int a[10];
    int *p,*psum,sum=0;
    p=a;
    psum=&sum;
    printf("Enter the array element");
    for(int i=0;i<10;i++)
    {
        scanf("%d",p+i);

    }
    for(int i=0;i<10;i++)
    {
       *psum=*psum+ *(p+i);
    }
    printf("sum =%d",*psum);
    getch();

}
