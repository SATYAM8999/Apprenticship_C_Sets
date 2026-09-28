#include<stdio.h>
void main()
{
    long long int salary;
    printf("Enter the salary of Employee");
    scanf("%lld",&salary);
    (salary<=15000)?printf("Employee is Poen"):
    (salary>15000 && salary<=25000)?printf("Employee is Second Division Clerk"):
    (salary>25000 && salary<=35000)?printf("Employee in first Division clerk"):
    (salary>35000 && salary<=45000)?printf("Employee post in assistant Manager "):
    (salary>45000 && salary<=60000)?printf(" Employee Post in Manager"):
    printf("involid  Salary");
    getch();
}
