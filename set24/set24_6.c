#include<stdio.h>
void main()
{
   char str[100];
   printf("Enter the string\n");
   scanf("%[^\n]",&str);
   int vowel=0;
   for(int i=0;str[i]!='\0';i++)
   {
       int ch=str[i];
       if(ch=='a'|| ch=='e'|| ch=='i' || ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
       {
           vowel=vowel+1;
       }
   }
   printf("Number of vowel in string=%d",vowel);

getch();

}
