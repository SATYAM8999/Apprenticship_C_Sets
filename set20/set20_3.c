#include<stdio.h>
void main()
{
    int a[10]={10,11,13,15,14,29,47,45,61,51};
    int count=0;
    printf("Array Element are\n");
    for(int i=0;i<10;i++)
    {
        printf("%d , ",a[i]);

    }
    for(int i=0;i<10;i++)
    {
       int flag=1;
        for(int j=2;j<=10;j++)
        {
           if(a[i]%j==0)
           {
                flag=0;
                break;
           }
        }
        if(flag==1)
        {
            count=count+1;
        }

    }
   // printf("\n \n Prime number Count=%d\n \n",count);

  printf("\n \n prime Array is \n \n ");
    int prime[count],pos=0;
    for(int i=0;i<10;i++)
    {
       int flag=1;
        for(int j=2;j<10;j++)
        {
           if(a[i]%j==0)
           {
                flag=0;
                break;
           }
        }
        if(flag==1)
        {
           prime[pos++]=a[i];
        }

    }
    for(int i=0;i<count;i++)
    {
        printf("%d , ",prime[i]);
    }



    getch();
}
