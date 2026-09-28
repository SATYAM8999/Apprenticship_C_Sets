#include<stdio.h>
void main()
{
    int *p1;
    float *p2;
    char *p3;
    double *p4;
    printf("Size of integer is:%d",sizeof(*p1));
    printf("\nSize of float is:%d",sizeof(*p2));
    printf("\nSize of character is:%d",sizeof(*p3));
    printf("\nSize of double is:%d",sizeof(*p4));

    getch();
}
