
#include<stdio.h>
void main()
{
    char character;
    printf("enter the character");
    character=getchar();
    int ascii=(int)character;
    printf("Ascii code=%d",ascii);
    if(ascii>=65 && ascii<=90)
    {
        printf("\n %c is the is Uppercase character",character);
    }
    else if(ascii>=97 && ascii<=122)
    {
        printf("%c is the is Lowercase character",character);
    }
    else
    {
        printf("Unknown Character");
    }

    getch();
}


