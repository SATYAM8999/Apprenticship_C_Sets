#include<stdio.h>
void main()
{
   char str1[100],str2[100];
   printf("Enter the First string\n");
   scanf("%s",&str1);
   printf("Enter the Second  string\n");
   scanf("%s",&str2);
   int count1=0,count2=0;
   for(int i=0;str1[i]!='\0';i++)
   {
       count1=count1+1;
   }
   for(int i=0;str2[i]!='\0';i++)
   {
       count2=count2+1;
   }

   char concat[count1+count2];
   int index=0;
   for(int i=0;str1[i]!='\0';i++)
   {
      concat[index++]=str1[i];
   }
   for(int i=0;str2[i]!='\0';i++)
   {
       concat[index++]=str2[i];
   }
   printf("After Concating Two String\n%s\n",concat);


getch();
}
