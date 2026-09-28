#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter the two Strings string\n");
    gets(str1);
    gets(str2);
    strlwr(str1);
    strupr(str2);

    printf("After Conversion=%s",str1);
    printf("After Conversion=%s",str2);
    getch();
}
