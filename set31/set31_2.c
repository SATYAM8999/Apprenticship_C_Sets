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
    int n=10;
    student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the roll no,name and percentage of of student%d\n",i+1);

        scanf("%d%s%f",&s[i].rollno,&s[i].name,&s[i].per);
    }
    int fc=0,sc=0,dc=0;
    for(int i=0;i<n;i++)
    {
      if(s[i].per>=50 && s[i].per<60)
        sc=sc+1;
      if(s[i].per>=60 && s[i].per<70)
        fc=fc+1;
      if(s[i].per>=70 && s[i].per<=100)
        dc=dc+1;
    }
    student first[fc];
    student second[sc];
    student distinction[dc];
    int p=0,q=0,r=0;
    for(int i=0;i<n;i++)
    {
      if(s[i].per>=50 && s[i].per<60)
        second[p++]=s[i];
      if(s[i].per>=60 && s[i].per<70)
        first[q++]=s[i];
      if(s[i].per>=70 && s[i].per<=100)
        distinction[r++]=s[i];
    }
    printf("second class:\n");
    for(int i=0;i<sc;i++)
      printf("%d-----%s------%f\n",second[i].rollno,second[i].name,second[i].per);

    printf("\nfirst class:\n");
    for(int i=0;i<fc;i++)
        printf("\n%d-----%s------%f\n",first[i].rollno,first[i].name,first[i].per);

    printf("\ndistinction class:\n");
    for(int i=0;i<dc;i++)
    printf("\n%d-----%s------%f\n",distinction[i].rollno,distinction[i].name,distinction[i].per);
  getch();
}

