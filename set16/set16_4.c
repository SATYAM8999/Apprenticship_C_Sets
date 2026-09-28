#include<stdio.h>
void main()
{
    int n=10,i=2;
    int count=0;
    printf("Even numbers\n");
    while(count<n)
    {
        printf("%d,",i);
        i=i+2;
        count++;
    }
    getch();

}
