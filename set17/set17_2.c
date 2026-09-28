#include<stdio.h>
void main()
{
    int n=100,i=1;
    do
    {
        printf("%d\n",i);
        if(i%4==0)
        {
            printf("---------------------------------------\n");
        }
        i++;
    }while(n>=i);
    getch();
}
