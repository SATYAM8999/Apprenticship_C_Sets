#include<stdio.h>
struct dt
{
    int num;
};
typedef struct dt data;
void main()
{
    data d[5];
    d[0].num=10;
    d[1].num=20;
    d[2].num=30;
    d[3].num=40;
    d[4].num=50;

    printf("Structure array elements are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",d[i].num);
    }
    doReverse(d);
     printf("\nreverse array elements are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",d[i].num);
    }

  getch();
}
void doReverse(data d[])
{
    int last_position=4;
    for(int i=0;i<5/2;i++)
    {
        int temp=d[i].num;
        d[i].num=d[last_position].num;
        d[last_position].num=temp;

         last_position--;

    }

}
