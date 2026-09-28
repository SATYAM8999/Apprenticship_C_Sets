#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int no;
    printf("Enter the two strings:\n");
    gets(str1);
    gets(str2);
    printf("enter the no of character to be copy");
    scanf("%d",&no);
    strncpy(str1,str2,no);
    printf("\nAfter copying first string =%s",str1);
    printf("\nAfter copying second string =%s",str2);

    getch();
}
