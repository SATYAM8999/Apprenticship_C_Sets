#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter the two Strings string\n");
    gets(str1);
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("Two Strings are Equal\n");
    }
    else
    {
        printf("Two Strings are not Equal\n");
    }
    getch();
}

