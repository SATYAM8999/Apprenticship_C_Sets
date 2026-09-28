#include<stdio.h>
void main()
{
    char str[10];
    printf("Enter the Character\n");
    scanf("%s",&str);

    for(int i=0;str[i]!='\0';i++)
    {
         printf("str[%d]=%c at %d \n",i,str[i],&str[i]);
    }
getch();
}
