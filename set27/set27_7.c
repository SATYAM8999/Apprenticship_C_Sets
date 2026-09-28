#include<stdio.h>
void main()
{
    int size;
    printf("enter the size of array");
    scanf("%d",&size);
    int a[size+1];
    printf("Enter the array element:\n");
    for(int i=0;i<size;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Given array is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ,",a[i]);
    }
    int position,element;
    printf("\nEnter the element and position in which the element is to be inserted");
    scanf("%d%d",&element,&position);


    insertElement(a,size,element,position);
    printf("After inserting new element is array is:\n");
    for(int i=0;i<size+1;i++)
    {
        printf("%d ,",a[i]);
    }

    getch();
}
void insertElement(int x[],int n,int element,int pos)
{
    pos=pos-1;
    for(int i=n;i>=pos;i--)
    {
        x[i+1]=x[i];

    }
    x[pos]=element;

}
