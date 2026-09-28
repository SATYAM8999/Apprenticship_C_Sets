#include<stdio.h>
void main()
{
   char str[100];
   printf("Enter the First string\n");
   scanf("%[^\n]",&str);

   int count=0;
   for(int i=0;str[i]!='\0';i++)
   {
       char ch=str[i];
       int ascii=(int)ch;
       if(ascii==32)
       {
           count=count+1;
       }
   }
   count=count+1;
   printf("Number Of Words is Given String=%d",count);

 getch();
}
