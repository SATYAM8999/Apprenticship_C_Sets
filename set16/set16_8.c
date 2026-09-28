#include<stdio.h>
void main()
{
    int n=10,i=2;
    int count=0;
    while(count<n)
    {
        int flag=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d,",i);
            count++;
        }
        i++;

    }
    getch();
}
