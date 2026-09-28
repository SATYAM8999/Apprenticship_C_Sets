#include<stdio.h>
void main()
{
    int sizea=10,sizeb=6;
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int b[6]={100,300,200,43,900,600};

    printf("\n \n Array A:");
    for(int i=0;i<sizea;i++)
    {
        printf("%d , ",a[i]);

    }
    printf("\n \n Array B: ");
    for(int i=0;i<sizeb;i++)
    {
        printf("%d , ",b[i]);

    }
    int csize=sizea+sizeb;
    int carray[csize],cpos=0;

    for(int i=0;i<sizea;i++)
    {
        carray[cpos++]=a[i];
    }
    for(int i=0;i<sizeb;i++)
    {
        carray[cpos++]=b[i];
    }
    printf("\n \n \n new array are\n");
    for(int i=0;i<csize;i++)
    {
        printf("%d , ",carray[i]);
    }

 getch();

}
