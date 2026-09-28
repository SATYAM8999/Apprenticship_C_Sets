#include<stdio.h>
struct dt
{
    int id;
    char name[100];
    float salary;
};
typedef struct dt employee;
employee getIncreasedSalary(employee);
void main()
{
    employee e;
    printf("Enter the id name and salary of employee\n");
    scanf("%d%s%f",&e.id,&e.name,&e.salary);
    employee newsalary=getIncreasedSalary(e);
    printf("Increased salary details are ");
    printf("%d-----%s------%f",newsalary.id,newsalary.name,newsalary.salary);

    getch();


}
employee getIncreasedSalary(employee temp)
{
    float one_persent_increment=temp.salary/100;
    float fifty_salary=one_persent_increment*50;
    temp.salary= temp.salary+fifty_salary;
    return temp;


}
