#include <stdio.h>
void main()
{
    int *p1,a;
    p1=&a;

    printf("Enter the number: ");
    scanf("%d",p1);

    printf("Before dereferencing the number is: %d\n",*p1);

    *p1=100;
    printf("After dereferencing the number is: %d\n",*p1);

   getch();
}
