#include<stdio.h>
void main()
{
    int x1,x2,y1,y2;
    printf("enter the four points");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    (x1==x2)?printf("Given points are parallel to y axis"):printf("Given points Not  parallel to y axis");
    getch();
}
