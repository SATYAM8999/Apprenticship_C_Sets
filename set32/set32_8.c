#include<stdio.h>
struct dt
{
    int a;
    float b;
    char name[10];
};
union ut
{
    int a;
    float b;
    char name[10];
};
typedef struct dt structure_data;
typedef union ut union_data;
void main()
{
    structure_data sd={123,99.33,"ram"};
    union_data ud={123,99.33,"ram"};
    printf("Structure data is:%d----%f----%s-----\n",sd.a,sd.b,sd.name);
    printf("\nUnion data is:%d----%f----%s-----\n",ud.a,ud.b,ud.name);
    getch();
}

