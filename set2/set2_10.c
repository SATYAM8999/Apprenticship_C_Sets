#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("enter the value of x1,x2,x3,y1,y2,y3");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    int distance1=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
    int distance2=((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3));
    int distance3=((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3));
    int result=distance1+distance2+distance3;
    float finaldistance=(float)sqrt(result);
    printf("Distance between three points=%f\n",finaldistance);
    getch();
}
