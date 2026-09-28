#include<stdio.h>
union ud
{
    char string[10];
    int a,b,c;

};
typedef union ud union_data;
void main()
{
   union_data ud;

   printf("Enter the three numbers:\n");
   scanf("%d%d%d",&ud.a,&ud.b,&ud.c);

   printf("the Given data is:\n");
   printf("%d-----%d------%d",ud.a,ud.b,ud.c);
   getch();
}

