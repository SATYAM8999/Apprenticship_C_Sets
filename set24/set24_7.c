#include<stdio.h>
void main()
{
   char str[100];
   printf("Enter the string\n");
   scanf("%[^\n]",&str);
   int consonant=0;

   for(int i=0;str[i]!='\0';i++)
   {

       int ch=str[i];
       int ascii=(int)ch;
       if((ascii>=65 && ascii<=90)|| (ascii>=97 && ascii<=122))
       {
          if(ch!='a'&& ch!='e'&& ch!='i' && ch!='o'&& ch!='u'&& ch!='A'&& ch!='E'&& ch!='I'&& ch!='O'&& ch!='U')
          {
           consonant=consonant+1;
          }
       }
   }
   printf("Number of consonant in string=%d",consonant);

 getch();
}
