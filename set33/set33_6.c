#include <stdio.h>
void main()
{
    int *p1,*p2,a,b,s;
    float *div,d;
    p1=&a;
    p2=&b;
    div=&d;

    printf("Enter the two numbers:\n");
    scanf("%d%d", p1, p2);

    *div=(float)*p1/(*p2);
    printf("\n division is %f\n",*div);

    getch();
}

