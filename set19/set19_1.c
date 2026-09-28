#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter the element of an array");
    int a[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array element Are\n");
    for(int i=0;i<size;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    int element1,element2;
    printf("Enter the two element that to be swap\n");
    scanf("%d%d",&element1,&element2);
    int pos1=-1,pos2=-1;
    for(int i=0;i<size;i++)
    {
        if(element1==a[i])
        {
            pos1=i;
        }
        if(element2==a[i])
        {
            pos2=i;
        }

    }
    printf("position1=%d\n",pos1);
    printf("position=%d\n",pos2);
    if(pos1!=-1  &&  pos2!=-1)
    {
        int temp;
        temp=a[pos1];
        a[pos1]=a[pos2];
        a[pos2]=temp;

        printf("Swapped element are");
        for(int i=0;i<size;i++)
        {
            printf("%d,",a[i]);
        }
    }
    else
    {
        printf("The Element is Not Found in Array");
    }

  getch();

}
