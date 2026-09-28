#include<stdio.h>
void main()
{
    int number;
    printf("enter the numebr");
    scanf("%d",&number);
    if(number>0)
    {
        printf("%d is positive number",number);
    }
    else
    {
        printf("%d is a Negative number",number);
    }
    getch();
}
