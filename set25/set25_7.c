#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter the string in upper case");
    scanf("%[^\n]",&str);


    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        int ascii=(int)ch;
        if(ascii>=65 && ascii<=90)
        {
            int newascii=ascii+32;
            char newchar=(char)newascii;
            str[i]=newascii;
        }
       if(ascii>=97 && ascii<=122)
        {
            int newascii=ascii-32;
            char newchar=(char)newascii;
            str[i]=newascii;
        }
    }
     printf("The new String =%s",str);
 getch();
}
