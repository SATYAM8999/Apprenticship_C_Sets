#include<stdio.h>
void main()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);
    switch(number%2)
    {
        case 0:printf("%d is EVEN",number);
               break;
        case 1:printf("%d is ODD",number);
               break;

    }
    getch();
}
