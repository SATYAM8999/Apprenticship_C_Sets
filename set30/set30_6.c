#include<stdio.h>
#include<math.h>
struct dot
{
    int x,y;
};
typedef struct dot point;
void main()
{
     point  p1,p2;
     printf("Enter the first points in a cartition coordinate system");
     scanf("%d%d",&p1.x,&p1.y);
     printf("Enter the second points in a cartition coordinate system");
     scanf("%d%d",&p2.x,&p2.y);

     float distance=(float)(pow(p1.x-p2.x,2))+(pow(p1.y-p2.y,2));
     float main_distance=sqrt(distance);
     printf("Distance between two points=%f",main_distance);
     getch();

}
