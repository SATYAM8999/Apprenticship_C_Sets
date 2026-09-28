#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character");
    ch=getchar();
    int ascii=(int)ch;
    if((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122))
    {
        printf("given character is Alphabet");
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
          {
             printf("%c is the Vowel",ch);

          }
         else
          {
            printf("%c is a Consonent",ch);
          }

    }
    else
    {
       printf("Given character is not a Alphabet");
    }
    getch();
}
