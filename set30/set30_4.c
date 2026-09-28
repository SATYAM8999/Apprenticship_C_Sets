#include<stdio.h>
#include<string.h>
void main()
{
    char name[20][100];
    int n;
    printf("Enter the number of name to be entered");
    scanf("%d",&n);
    printf("Enter the %d names\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",&name[i]);
    }
     for(int i=0;i<n-1;i++)
     {
          for(int j=i+1;j<n;j++)
          {
              if(strcmp(name[i],name[j])>0)
              {
                  char temp[100];
                  strcpy(temp,name[i]);
                  strcpy(name[i],name[j]);
                  strcpy(name[j],temp);
              }
          }
     }
     printf("After sorting name:\n");
     for(int i=0;i<n;i++)
     {
         printf("%s \n",name[i]);
     }
    getch();
}
