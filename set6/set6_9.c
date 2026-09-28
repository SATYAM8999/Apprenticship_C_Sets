#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the Marks of student");
    scanf("%d",&marks);
    (marks>=0 && marks<=35)?printf("student is fail"):
    (marks>=36 && marks<=40)?printf("student is pass "):
    (marks>40 && marks<=50)?printf("student in third class"):
    (marks>50 && marks<=60)?printf("student in Second class "):
    (marks>60 && marks<=70)?printf("student in first class "):
    (marks>70 && marks<=100)?printf("student in Distinction "):printf("involid marks");
    getch();
}
