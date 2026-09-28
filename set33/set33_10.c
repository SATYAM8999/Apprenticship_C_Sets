#include<stdio.h>
void main()
{
   int a[10],*p;
   p=a;
   printf("Enter the array element:\n");
   for(int i=0;i<10;i++)
   {
       scanf("%d",p+i);
   }
   int pt,*ptemp;
   ptemp=&pt;
   for(int i=0;i<9;i++)
   {
       for(int j=i+1;j<10;j++)
       {
           if(*(p+i)>*(p+j))
           {
               *ptemp=*(p+i);
               *(p+i)=*(p+j);
               *(p+j)=*ptemp;
           }
       }
   }
   printf("Sorted Array Element are:\n");
    for(int i=0;i<10;i++)
   {
       printf("%d \n",*(p+i));
   }

   getch();

}
