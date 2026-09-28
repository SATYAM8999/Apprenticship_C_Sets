#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int no;
    printf("Enter the two strings:\n");
    gets(str1);
    gets(str2);
    printf("enter the no of character to be compare");
    scanf("%d",&no);
    if(strncmp(str1,str2,no==0))
    {
        printf("the given character are equal to string\n");
    }
    else
    {
        printf("Give string is not equal");
    }



    getch();
}

