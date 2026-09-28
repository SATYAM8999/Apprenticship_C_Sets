#include<stdio.h>
void main()
{

    int a,b;
    int continue_user;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    do
    {
     int choice;
     printf("------------USER MENU-----------------");
     printf("1.ADDITION\n 2.SUBTRACTION\n 3.MULTIPLICATION\n 4.DIVISION\n 5.MODULUS");
     printf("Enter the user choice");
     scanf("%d",&choice);
     int result;
     float result1;

     switch(choice)
      {
        case 1:result=a+b;
               printf("Addition=%d",result);
               break;
        case 2:result=a-b;
               printf("Subtraction of two number==%d",result);
               break;
        case 3:result=a*b;
               printf("Multiplication=%d",result);
               break;
        case 4:result1=(float)a/b;
               printf("Division=%f",result1);
               break;
        case 5:result=a%b;
               printf("Reminder=%d",result);
               break;

        default:printf("Invalid Choice");
                break;

      }
      printf("We Wont to contunue press 1 for YES and press 0 for NO");
      scanf("%d",&continue_user);
    }while(continue_user==1);

}
