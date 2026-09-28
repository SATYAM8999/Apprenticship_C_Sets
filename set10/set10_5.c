#include<stdio.h>
void main()
{
    int x1,x2,y1,y2;
    printf("enter the co-ordinates");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(y1==y2)
    {
        printf("point are parallel to X-axis");

        printf("\n distance between to point is%d",y1);
    }
    else
    {
        printf("Point are not parallel to x axis");
    }
    getch();

}
