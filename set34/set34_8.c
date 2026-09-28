#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n;
    printf("Enter the range of array element:\n");
    scanf("%d",&n);
    p=malloc(n*sizeof(int));

    printf("Enter the array Element:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    int *pb,*pm;
    pb=p;
    pm=p;
    for(int i=1;i<n;i++)
    {
        if(*(p+i)>*pb)
        {
            pb=p+i;
        }
    }
     for(int i=1;i<n;i++)
    {
        if(*(p+i)<*pm)
        {
            pm=p+i;
        }
    }
    printf("\nBig Element is:%d",*pb);
    printf("\nSmall Element is:%d",*pm);


    getch();
}
