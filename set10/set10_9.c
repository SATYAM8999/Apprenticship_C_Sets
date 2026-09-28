#include<stdio.h>
void main()
{
    int salary;
    printf("Enter the Salary of Employees");
    scanf("%d",&salary);
    if(salary<=15000)
        printf("PEON");
    else if(salary>15000 && salary<=25000)
        printf("Employee are post in  Second Division Clerk");
    else if(salary>25000 && salary<=35000)
        printf("Employee are post in First Division Clerk");
    else if(salary>35000 && salary<=45000)
        printf("Employee are post in Assistant Manager");
    else if(salary>45000 && salary<=60000)
        printf("Employee are post in Manager");
    else
    {
        printf("Involid Input");
    }

    getch();
}
