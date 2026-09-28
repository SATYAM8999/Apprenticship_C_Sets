#include<stdio.h>
void main()
{
    char character;
    int num;
    printf("Enter the character and number\n");
    scanf("%c%d",&character,&num);
    int asciicode=(int)character;
    printf("ascii code=%d\n",asciicode);
    char character1=(char)asciicode+num;
    printf("nuw character=%c\n",character1);
    getch();

}
