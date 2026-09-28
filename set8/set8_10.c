#include<stdio.h>
void main()
{
   char string[30];
   printf("enter the text\n");
   scanf("%[^\n]",&string);
   puts(string);
   getch();

}
