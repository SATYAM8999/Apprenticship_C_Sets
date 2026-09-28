#include<stdio.h>
#include<math.h>
struct dot
{
    int x,y;
};
typedef struct dot point;
void main()
{
    point p[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the points in cartition coordination system%d \n",i+1);
        scanf("%d%d",&p[i].x,&p[i].y);
    }

    int flag=1;
    for(int i=0;i<5;i++)
    {
        if(p[0].y!=p[i].y)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Points are parallel to x axix\n");
    }
    else
    {
        printf("Points are not parallel to x axix\n");
    }
    getch();

}
