
#include<stdio.h>
void main()
{
    int number;
    printf("enter the numebr");
    scanf("%d",&number);
    if(number%6==0 && number%9==0)
    {
        printf("%d is divisible by 6 and 9",number);
    }
    else
    {
         printf("%d is Not divisible by 6 and 9",number);
    }
    getch();
}


