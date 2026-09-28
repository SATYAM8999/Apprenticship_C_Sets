#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter the two Strings string\n");
    gets(str1);
    gets(str2);
    printf("\nBefore Copying String1:%s",str1);
    printf("\nBefore Copying String2:%s",str2);
    strcpy(str1,str2);
    printf("\nafter Copying String1:%s",str1);
    printf("\nafter Copying String2:%s",str2);
    getch();
}
