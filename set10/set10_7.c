#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the co-ordinates in Catesion coordinate system");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
        printf("point in first quardrant");
    else if(x<0 && y>0)
        printf("point in Second quardrant");
    else if(x<0 && y<0)
        printf("point in Third quardrant");
    else if(x>0 && y<0)
        printf("point in Fourth quardrant");
    else if(x>0 && y==0)
        printf("point in Positive X Axis");
    else if(x=0 && y>0)
        printf("point in Positive Y Axis");
    else if(x<0 && y=0)
        printf("point in Negative X Axis");
    else if(x=0 && y<0)
        printf("point in Negative Y Axis");
    else
        printf("point in Origin");
    getch();
}
