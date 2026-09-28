#include<stdio.h>
void main()
{
   char str[100];
   printf("Enter the First string\n");
   scanf("%s",&str);
   int count=0;
   for(int i=0;str[i]!='\0';i++)
   {
       count=count+1;
   }

   int end=count-1,flag=1;;
   for(int i=0;i<count/2;i++)
   {

     if(str[i]!=str[end])
     {
         flag=0;
         break;
     }
     end=end-1;
   }
   if(flag==1)
   {
       printf("The Given String is Paliandrome");

   }
   else
   {
       printf("The Given String is NOT a Paliandrome");
   }

  getch();
}
