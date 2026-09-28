#include<stdio.h>
#include<math.h>
struct dot
{
    int x,y;
};
typedef struct dot point;
void main()
{
     point  p1,p2,p3;
     printf("Enter the first points in a cartition coordinate system");
     scanf("%d%d",&p1.x,&p1.y);
     printf("Enter the second points in a cartition coordinate system");
     scanf("%d%d",&p2.x,&p2.y);
     printf("Enter the third points in a cartition coordinate system");
     scanf("%d%d",&p3.x,&p3.y);

    float a=(float)sqrt((pow(p1.x-p2.x,2))+(pow(p1.y-p2.y,2)));
    float b=(float)sqrt((pow(p2.x-p3.x,2))+(pow(p2.y-p3.y,2)));
    float c=(float)sqrt((pow(p1.x-p3.x,2))+(pow(p1.y-p3.y,2)));
    float s=(a+b+c)/2;
    float distance=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Distance between two points=%f",distance);
    getch();

}

