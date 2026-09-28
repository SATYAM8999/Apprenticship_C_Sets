#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter the two Strings string\n");
    gets(str1);
    gets(str2);
    printf("\nBefore concating String1:%s",str1);
    printf("\nBefore concating String2:%s",str2);
    strcat(str1,str2);
    printf("\nafter concating String1:%s",str1);
    printf("\nafter concating String2:%s",str2);
    getch();
}


