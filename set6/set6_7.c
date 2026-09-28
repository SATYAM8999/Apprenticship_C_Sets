#include<stdio.h>
void main()
{
    int x1,x2,y1,y2;
    printf("enter the four points");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    (y1==y2)?printf("Given points are parallel to X axis"):printf("Given points Not  parallel to X axis");
    getch();
}
