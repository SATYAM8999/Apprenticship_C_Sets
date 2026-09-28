#include<stdio.h>
void main()
{
    int a[10]={123,-21,0,23,-3445,0,34,-33,0,0};
    printf("Given numbers");

   for(int i=0;i<10;i++)
   {
       printf("%d ,",a[i]);
   }
   findPositive(a);
   findNegative(a);
   findZero(a);

  getch();

}
int findPositive(int x[])
{
 int pc=0;
 for(int i=0;i<10;i++)
 {

    int num=x[i];
    if(num>0)
    {
        pc=pc+1;

    }
 }
 printf("\nPositive count=%d",pc);
}
int findNegative(int x[])
{
 int nc=0;
 for(int i=0;i<10;i++)
 {

    int num=x[i];
    if(num<0)
    {
        nc=nc+1;

    }
 }
 printf("\nNegative count=%d",nc);
}
int findZero(int x[])
{
 int zc=0;
 for(int i=0;i<10;i++)
 {

    int num=x[i];
    if(num==0)
    {
        zc=zc+1;

    }
 }
 printf("\nZero count=%d",zc);
}
