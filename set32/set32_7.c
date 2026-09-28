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
    structure_data sd;
    union_data ud;
    printf("The size of structure data is:%d\n",sizeof(sd));
    printf("\nThe size of Union data is:%d",sizeof(ud));
    getch();
}
