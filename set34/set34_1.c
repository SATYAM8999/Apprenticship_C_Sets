#include<stdio.h>
void main()
{
    int *p,a[5];
    p=a;
    printf("Enter the array elements:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    printf("array elements are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ,",(p+i));
    }
    int flag=1;
    for(int i=0;i<5;i++)
    {
       if((p+i)>(p+i)+1)
       {
           flag=0;
           break;
       }
    }
    if(flag==1)
        printf("\nAddress are sorted in Ascending order\n");
    else
        printf("\nAddress are sorted in descending order\n");


    getch();
}
