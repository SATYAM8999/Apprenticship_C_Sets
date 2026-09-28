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
    printf("\n \nPrime Numbers=\n");
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
            printf("%d , ",a[i]);
        }

    }
    printf("\n \nPrime number Count=%d",count);


    getch();
}
