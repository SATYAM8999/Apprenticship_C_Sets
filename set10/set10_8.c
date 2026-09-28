#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks of student");
    scanf("%d",&marks);
    if(marks>=0 && marks<=35)
    {
        printf("Fail");
    }
    else if(marks>35 && marks<=40)
    {
        printf("Student is pass");
    }
    else if(marks>40 && marks<=50)
    {
        printf("Student is Third Division");
    }
    else if(marks>50 && marks<=60)
    {
        printf("Student is Second Division");
    }
    else if(marks>60 && marks<=70)
    {
        printf("Student is First Division");
    }
    else if(marks>70 && marks<=75)
    {
        printf("Student in Distinction");
    }
    else
    {
        printf("Involid Input");
    }
    getch();
}
