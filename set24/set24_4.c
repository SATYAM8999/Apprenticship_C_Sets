#include<stdio.h>
void main()
{
   char str[100];
   printf("Enter the string\n");
   scanf("%[^\n]",&str);
   int count=0;
   for(int i=0;str[i]!='\0';i++)
   {
       count=count+1;
   }
   printf("Number of characters in string=%d",count);
getch();
}


