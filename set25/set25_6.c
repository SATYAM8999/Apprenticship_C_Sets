#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter the string in Lower case");
    scanf("%[^\n]",&str);

    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        int ascii=(int)ch;
        int newascii=ascii-32;
        char newchar=(char)newascii;
        str[i]=newchar;
    }
    printf("Upper case string=%s",str);

 getch();
}
