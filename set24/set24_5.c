#include<stdio.h>
void main()
{
   char str[100];
   printf("Enter the string\n");
   scanf("%[^\n]",&str);
   int sum=0;
   for(int i=0;str[i]!='\0';i++)
   {
       int ch=str[i];
       int ascii=(int)ch;
       printf("%d\n",ascii);
       sum=sum+ascii;
   }
   printf("sum of Ascii Number=%d",sum);

 getch();

}

