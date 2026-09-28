#include<stdio.h>
void main()
{
    int num1,num2,temp;
    printf("Enter Two number");
    scanf("%d%d",&num1,&num2);
    printf("Before swapping first number=%d and Second number=%d\n",num1,num2);
    temp=num1,num1=num2,num2=temp;
    printf("After swapping first number=%d and Second number=%d\n",num1,num2);
    getch();
}
