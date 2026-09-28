#include<stdio.h>
struct dt
{
    int a[10];
};
typedef struct dt data;
int  isSortedDes(data);
void main()
{

    data d;
    d.a[0]=95;
    d.a[1]=84;
    d.a[2]=81;
    d.a[3]=76;
    d.a[4]=57;
    d.a[5]=34;
    d.a[6]=32;
    d.a[7]=21;
    d.a[8]=4;
    d.a[9]=2;


    if(isSortedDes(d)==1)
        printf("The array are sorted in descending order\n");
    else
        printf("Array are not sorted in decending order");

    getch();



}
int isSortedDes(data d)
{
    int flag=1;
    for(int i=0;i<9;i++)
    {
          if(d.a[i]<d.a[i+1])
            {
                flag=0;
                break;
            }

    }
   return flag;

}
