#include<stdio.h>
struct dt
{
    int num;
};
typedef struct dt data;
void main()
{
    data d[5];
    d[0].num=121;
    d[1].num=291;
    d[2].num=354;
    d[3].num=432;
    d[4].num=511;

    printf("Structure array elements are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",d[i].num);
    }
     doReverse(d);
     printf("\nreverse of each number in array :\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",d[i].num);
    }

  getch();
}
void doReverse(data d[])
{
    for(int i=0;i<5;i++)
    {
        int n=d[i].num;
        int rev=0;
        while(n>0)
        {
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;

        }
      d[i].num=rev;
    }

}

