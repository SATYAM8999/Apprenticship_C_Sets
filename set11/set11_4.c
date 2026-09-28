#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three number");
    scanf("%d%d%d",&a,&b,&c);
    switch((a>b && a>c)?0:(b>a && b>c)?1:2)
    {
        case 0:printf("%d is Greatest",a);
              break;
        case 1:printf("%d is Greatest",b);
              break;
        case 2:printf("%d is Greatest",c);
              break;
    }
    getch();
}
