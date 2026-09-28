
#include<stdio.h>
void main()
{
    int number;
    printf("enter the numebr");
    scanf("%d",&number);
    if(number%149==0)
    {
        printf("%d is divisible by 149",number);
    }
    else
    {
         printf("%d is Not divisible by 149",number);
    }
    getch();
}

