#include<stdio.h>
void main()
{
    char str[10];
     str[0]='s';
     str[1]='a';
     str[2]='t';
     str[3]='y';
     str[4]='a';
     str[5]='m';
     str[6]='\0';

    for(int i=0;str[i]!='\0';i++)
    {
         printf("str[%d]=%c at %d \n",i,str[i],&str[i]);
    }
getch();
}
