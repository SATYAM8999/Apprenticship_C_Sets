#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter any Two points value");
    scanf("%d%d",&x,&y);
    (x>0 && y>0)?printf("point in first quardrant"):
    (x<0 && y>0)?printf("point in second quardrant"):
    (x<0 && y<0)?printf("point in third quardrant"):
    (x>0 && y<0)?printf("point in fourth quardrant"):
    (x=0 && y>0)?printf("positive y axis"):
    (x>0 && y=0)?printf("positive x axis"):
    (x=0 && y<0)?printf("negative y axis"):
    (x<0 && y=0)?printf("negative x axis"):
     printf("point in Origin");

    getch();
}
