#include<stdio.h>
void main()
{
    char character;
    printf("Enter the character\n");
    scanf("%c",&character);
    int asciicode=(int)character;
    printf("Ascii code=%d\n",asciicode);
    char againcharacter=(char)asciicode;
    printf("Character=%c\n",againcharacter);
    getch();

}
