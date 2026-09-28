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

   if(count1==count2)
   {
       int flag=1;
       for(int i=0;str1[i]!='\0';i++)
       {
           if(str1[i]!=str2[i])
           {
               flag=0;
               break;
           }
       }
       if(flag==1)
       {
           printf("The Two Strings Are Equal");

       }
       else
        {
            printf("Two Strings Are not Equal");
        }



   }
  else
    {
        printf("The Two Strings Are not a Same Length");
    }

 getch();
}
