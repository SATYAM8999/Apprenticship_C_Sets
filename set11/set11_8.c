#include<stdio.h>
void main()
{
    char color;
    printf("enter the first character of the color in lower case");
    color=getchar();
    switch(color)
    {
        case 'r':printf("Red");
               break;
        case 'o':printf("Orange");
               break;
        case 'y':printf("Yellow");
               break;
        case 'g':printf("Green");
               break;
        case 'b':printf("Blue");
               break;
        case 'i':printf("Indigo");
               break;
        case 'v':printf("Voilet");
               break;
    }
    getch();
}
