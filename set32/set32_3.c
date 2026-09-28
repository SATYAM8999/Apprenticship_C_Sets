#include<stdio.h>
struct dt
{
    int num;
};
typedef struct dt data;
void main()
{
    data d[10];
    printf("Enter the numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&d[i].num);
    }
    printf("array elements are:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ,",d[i].num);
    }
    getSortedAscending(d);
    printf("\nAfter sorting array elements are:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ,",d[i].num);
    }



  getch();

}
void getSortedAscending(data d[])
 {
     for(int i=0;i<9;i++)
     {
         for(int j=i+1;j<10;j++)
         {
             if(d[i].num>d[j].num)
             {
                 int temp=d[i].num;
                 d[i].num=d[j].num;
                 d[j].num=temp;
             }
         }
     }
 }
