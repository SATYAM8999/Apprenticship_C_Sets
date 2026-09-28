#include<stdio.h>
void main()
{
    int a,b,choice;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);

    printf("MENU");
    printf("\n 1 Addition");
    printf("\n 2 Subtraction");
    printf("\n 3 Multiplication");
    printf("\n 4 Division");
    printf("\n 5 Reminder");
    printf("enter your choice");
    scanf("%d",&choice);
    int result;
    float result1;
    switch(choice)
    {
        case 1:result=a+b;
               printf("addition=%d",result);
               break;
        case 2:result=a-b;
               printf("Difference=%d",result);
               break;
        case 3:result=a*b;
               printf("Product=%d",result);
               break;
        case 4:result1=(float)a/b;
               printf("Questiont=%f",result1);
               break;
        case 5:result=a%b;
               printf("Reminder=%d",result);
               break;
        case 6:result=a+b;
               printf("addition=%d",result);
               break;

        default:printf("Involid Choice");
                break;
    }
    getch();
}
