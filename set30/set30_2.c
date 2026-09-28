#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int no;
    printf("Enter the two strings:\n");
    gets(str1);
    gets(str2);
    printf("enter the no of character to be Concat");
    scanf("%d",&no);
    strncat(str1,str2,no);
    printf("\nAfter concatinating first string =%s",str1);
    printf("\nAfter concatinatings second string =%s",str2);

    getch();
}
