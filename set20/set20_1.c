#include<stdio.h>
void main()
{
    int a[10]={10,40,43,54,65,78,86,46,8,100};
    int b[10]={98,45,34,24,54,67,78,100,60,40};
    printf("\n First array\n:");
    for(int i=0;i<10;i++)
    {
        printf("%d , ",a[i]);
    }
    printf("\nSecond array\n");
    for(int i=0;i<10;i++)
    {
        printf("%d , ",b[i]);
    }

    printf("\n \n Common Element in an array\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d , ",a[i]);
            }
        }
    }


  getch();
}
