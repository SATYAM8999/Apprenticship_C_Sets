#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the point in cartision coordinate system");
    scanf("%d%d",&x,&y);
    switch((x>0 && y==0)?1:(x<0 && y==0)?2:(x==0 && y>0)?3:(x==0 && y<0)?4:5)
    {
        case 1:printf("point lies in positive X Axis");
               break;
        case 2:printf("point lies in Negative X Axis");
               break;
        case 3:printf("point lies in positive y Axis");
               break;
        case 4:printf("point lies in Negative y Axis");
               break;
        case 5:printf("point does not lies any Axis");
               break;

    }
    getch();
}
