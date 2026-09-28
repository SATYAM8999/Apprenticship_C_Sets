#include<stdio.h>
void main()
{
    int money,time;
    float rate;
    printf("enter the Amount Time And Rate  for Simple Intrest");
    scanf("%d%d",&money,&time);
    scanf("%f",&rate);
    float simple_intrest=(float)(money*time*rate)/100;
    printf("Simple Intrest =%f\n",simple_intrest);
    getch();

}
