#include<stdio.h>
void main()
{
    int radius;
    printf("Enter the radius of circle");
    scanf("%d",&radius);
    float area=(float)3.14*radius*radius;
    printf("Area of circle=%f\n",area);
    getch();
}
