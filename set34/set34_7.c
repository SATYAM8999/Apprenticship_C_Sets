#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n,*psum,sum=0;
    printf("Enter the range of the array:\n");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",p+i);
    }
    psum=&sum;
    for(int i=0;i<n;i++)
    {
        *psum=*psum+*(p+i);
    }
    printf("Addition of array Element is:%d\n",*psum);




    getch();
}

