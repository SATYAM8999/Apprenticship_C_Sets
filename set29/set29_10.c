#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],ch;
    printf("Enter the string\n");
    gets(str);
    printf("Enter the character To be search");
    scanf("%c",&ch);


    if(strchr(str,ch)!=NULL)
    {
        printf("\nThe Given Character is present in the String");
    }
    else
    {
        printf("The Given Character is not present in the String");
    }

    getch();
}

