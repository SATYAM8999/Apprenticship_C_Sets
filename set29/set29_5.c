#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter the string\n");
    gets(str);
    int length=strlen(str);
    printf("Length of String is:%d\n",length);
    getch();`
}
