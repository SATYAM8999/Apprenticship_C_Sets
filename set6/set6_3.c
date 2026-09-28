#include<stdio.h>
void main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    (num%2==0)?printf("Number is Even=%d\n",num):printf("Number is Odd=%d",num);
    getch();
}
