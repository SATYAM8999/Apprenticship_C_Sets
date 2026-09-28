#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2,y1,y2;
    printf("Enter the value of x1,x2,y1 and y2");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    int power1=(x1-x2)*(x1-x2);
    int power2=(y1-y2)*(y1-y2);
    int result=power1+power2;
    float distance=(float)sqrt(result);
    printf("Distance between two points=%f\n",distance);
    getch();

}
