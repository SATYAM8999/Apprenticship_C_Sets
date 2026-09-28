#include<stdio.h>
void main()
{
    int a,b;
    char choice;
    printf("enter your choice in Symbolic format");
    scanf("%c",&choice);
    printf("Enter the two number");
    scanf("%d%d",&a,&b);

    printf("MENU");
    printf("\n + Addition");
    printf("\n - Subtraction");
    printf("\n * Multiplication");
    printf("\n / Division");
    printf("\n % Reminder");
    int result;
    float result1;
    switch(choice)
    {
        case '+':result=a+b;
               printf("addition=%d",result);
               break;
        case '-':result=a-b;
               printf("Difference=%d",result);
               break;
        case '*':result=a*b;
               printf("Product=%d",result);
               break;
        case '/':result1=a/b;
               printf("Questiont=%d",result);
               break;
        case '%':result=a%b;
               printf("Reminder=%d",result);
               break;

        default:printf("Involid Choice");
                break;
    }
    getch();
}
