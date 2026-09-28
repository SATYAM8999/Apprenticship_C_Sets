#include<stdio.h>
struct pupil
{
    int rollno;
    char name[10];
    float per;
};
typedef struct pupil  student;
void main()
{

    student s;
    printf("size of student%d\n",sizeof(s));
    printf("Enter the roll no of student\n");
    printf("Enter the name  of student\n");
    printf("Enter the percentage of student\n");
    scanf("%d%s%f",&s.rollno,&s.name,&s.per);
    printf("size of roll no %d \n:",sizeof(s.rollno));
    printf("size of name %d \n:",sizeof(s.name));
    printf("size of percentage%d \n:",sizeof(s.per));
    printf("roll no of student:%d\n",s.rollno);
    printf("name of student:%s\n",s.name);
    printf("percentage  of student:%f",s.per);
    getch();




}
