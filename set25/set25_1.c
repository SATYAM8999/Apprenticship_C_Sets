#include<stdio.h>
void main()
{
   char str[100];
   printf("Enter the First string\n");
   scanf("%s",&str);

   int upper=0,lower=0,digit=0;
   for(int i=0;str[i]!='\0';i++)
   {
      char ch=str[i];
      int ascii=(int)ch;

      if(ascii>=65 && ascii<=90)
      {
         upper=upper+1;
      }

      if(ascii>=97 && ascii<=122)
      {
         lower=lower+1;
      }
      if(ascii>=48 && ascii<=57)
      {
         digit=digit+1;
      }

    }
    printf("\nNumber of Upper Case later=%d",upper);
    printf("\nNumber of Lower Case later=%d",lower);
    printf("\nNumber of Digits =%d",digit);

 getch();
}
