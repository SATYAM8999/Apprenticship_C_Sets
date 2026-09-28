#include<stdio.h>
void main()
{
    int num,flag=1;
    printf("Enter the number");
    scanf("%d",&num);
   for(int i=2;i<num;i++)
   {
      if(num%i==0)
      {
          flag=0;
          break;
      }
   }
   if(flag==1)
   {
       printf("%d is a prime Number",num);

   }
   else
    {
        printf("%d is Not a prime Number",num);
    }
   getch();
}

