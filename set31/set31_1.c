#include <stdio.h>
#include <string.h>
struct pupil {
    int rollno;
    char name[50];
    float per;
};
typedef struct pupil student;
void main()
{
    student s[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the roll no, name and percentage of student %d:\n", i + 1);
        scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].per);
    }

    for (int i = 0; i < 4; i++)
        {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i].name,s[j].name)>0)
             {
                student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
             }
        }
    }

    printf("\nRESULT:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ---- %s ---- %f\n", s[i].rollno, s[i].name, s[i].per);
    }

    getch();
}
