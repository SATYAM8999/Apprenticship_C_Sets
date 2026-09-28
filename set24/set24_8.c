
#include<stdio.h>
void main()
{
   char str[100];
   printf("Enter the string\n");
   scanf("%[^\n]",&str);
   char sp[10]={'@','#','$','%','&','*','~'};
   int count=0;
   for(int i=0;sp[i]!='\0';i++)
   {
       char symbol=sp[i];
       for(int j=0;str[j]!='\0';j++)
       {
           char one_char=str[j];
           if(symbol==one_char)
           {
               count=count+1;

           }
       }

   }
   printf("Number of Symbol in String=%d",count);
getch();
}
