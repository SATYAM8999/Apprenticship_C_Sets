#include<stdio.h>
void main()
{
   int items;
   printf("Enter the number of items");
   scanf("%d",&items);
   int dozon=items/12;
   int units=items%12;
   printf("Dozons=%d\n",dozon);
   printf("Remaining units=%d\n",units);
   getch();




}
