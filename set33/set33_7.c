#include <stdio.h>

void main()
{
    int *p1,*p2,*temp,a,b,t;
    p1=&a;
    p2=&b;
    temp=&t;
    printf("Enter the two numbers:\n");
    scanf("%d%d",p1,p2);
    printf("Before Swapping first no is %d and second  no is:%d\n",*p1,*p2);
    *temp=*p1;
    *p1=*p2;
    *p2=*temp;
    printf("After Swapping first no is %d and second  no is:%d\n",*p1,*p2);


    getch();
}


