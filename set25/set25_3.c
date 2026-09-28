#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter the string\n");
    scanf("%[^\n]",&str);
    int length=0;
    for(int i=0;str[i]!='\0';i++)
    {

        length=length+1;
    }
    char rev[length+1];
    int k=length-1;
    for(int i=0;str[i]!='\0';i++)
    {
        rev[i]=str[k];
        k--;
    }


    printf("Revising the string=%s",rev);
    getch();
}
