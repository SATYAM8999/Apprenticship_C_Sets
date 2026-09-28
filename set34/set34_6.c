#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p1,*p2;
    float *pres;
    p1=malloc(sizeof(int));
    p2=malloc(sizeof(int));
    pres=malloc(sizeof(float));
    printf("Enter two integar:\n");
    scanf("%d %d",p1,p2);
    *pres=(float)*p1/(*p2);
    printf("Division of Two Number=%f",*pres);

    getch();
}

