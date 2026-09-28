#include<stdio.h>
struct dt
{
    int a[5];
};
typedef struct dt data;
int getPrimeCount(data);
void main()
{

    data d;
    d.a[0]=3;
    d.a[1]=5;
    d.a[2]=8;
    d.a[3]=11;
    d.a[4]=30;

    int  primecount=getPrimeCount(d);
    printf("Prime Count=%d",primecount);
    getch();

}
int getPrimeCount(data d)
{
    int flag=1,count=0;
   for(int i=0;i<5;i++)
    {

        for(int j=2;j<5;j++)
        {
           if(d.a[i]%j==0)
           {
                flag=0;
                break;
           }
        }
        if(flag==0)
            break;


    }
    if(flag==1)
        {
            count=count+1;

        }
    return count;

}
