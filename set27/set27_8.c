#include<stdio.h>
int* evenArray(int[],int);
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Given array is:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ,",a[i]);
    }

    int *EA =evenArray(a,10);
    printf("Even Array Is:\n");
    for(int i=1;i<=EA[0];i++)
    {
        printf("%d ,",EA[i]);
    }

    getch();
}


int* evenArray(int x[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]%2==0)
            {
                count=count+1;
            }
    }

    printf("\ncount=%d\n",count);


   //int size=count+1;
   static int even[6],pos=1;//size=6
   even[0]=count;
   for(int i=0;i<n;i++)
   {
       if(x[i]%2==0)
       {
           even[pos++]=x[i];
       }
   }
    return even;
}



