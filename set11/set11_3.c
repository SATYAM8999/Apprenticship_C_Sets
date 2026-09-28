#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the Two number");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
        case 0:printf("%d is a greatest",b);
               break;
        case 1:printf("%d is a greatest",a);
               break;
    }

    getch();
}
