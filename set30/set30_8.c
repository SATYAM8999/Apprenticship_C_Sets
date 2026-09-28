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

    student s[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter the roll no,name and percentage of of student%d\n",i+1);

        scanf("%d%s%f",&s[i].rollno,&s[i].name,&s[i].per);
    }

    student topper=s[0];
    for(int i=1;i<10;i++)
    {
        if(s[i].per>topper.per)
        {
            topper=s[i];
        }
    }

    printf("Topper student:\n\n");

    printf("%d-----%s-------%f:",topper.rollno,topper.name,topper.per);


    getch();




}

