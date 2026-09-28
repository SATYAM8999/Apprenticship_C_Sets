#include<stdio.h>
void main()
{
    char str[100];
    printf("enter the string\n");
    scanf("%[^\n]",&str);
    int key;
    printf("Enter the key to be incrypted");
    scanf("%d",&key);

    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        int ascii=(int)ch;
        int newascii=ascii+(key%100);
        str[i]=newascii;
    }
    printf("Encrypted String=%s",str);

 getch();
}
