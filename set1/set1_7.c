#include<stdio.h>
void main()
{
    int base,height;
    printf("enter the base and Heights");
    scanf("%d%d",&base,&height);
    float area=(float)(0.5*base*height);
    printf("Area of Triangle=%f\n",area);
    getch();
}
