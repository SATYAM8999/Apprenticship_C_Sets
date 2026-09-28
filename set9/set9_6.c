
#include<stdio.h>
void main()
{
    int number;
    printf("enter the numebr");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is Even number",number);
    }
    else
    {
        printf("%d is a Odd number",number);
    }
    getch();
}
