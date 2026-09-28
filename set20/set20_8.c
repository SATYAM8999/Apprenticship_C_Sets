#include<stdio.h>
void main()
{
    int n,continue1,index=0;
    printf("Enter the size of the stack\n");
    scanf("%d",&n);
    int a[n];
    do
    {
        printf("\nMENU\n1.PUSH\n2.POP\n3.DISPLAY\n");
        int choice;
        printf("\nEnter Tour Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nInside the PUSH");
                   if(index<n)
                   {
                       int element;
                       printf("\nEnter the Element to be pushed into the stack");
                       scanf("%d",&element);
                       a[index++]=element;
                       printf("%d is Successfully push into the stack",element);

                   }
                  else
                   {
                       printf("\nStack is Full !!!!!");
                   }
                   break;

             case 2:printf("\nInside the POP");

                    if(index==0)
                   {
                       printf("\nStack is Empty !!!!!");


                   }
                  else
                   {
                      int deleted_Element=a[--index];
                      printf("%d is delete form the stack ",deleted_Element);
                   }
                   break;

             case 3:printf("\nInside the DISPLAY");

                    printf("\nStack Is\n");
                    for(int i=0;i<index;i++)
                    {
                        printf("%d ,",a[i]);
                    }

                   break;

             default:printf("\nInvolid Choice");
                     break;

        }

      printf("\n\n-------------------------------------------------");
      printf("\nDo You Want To Continue Press 1 for or press 0 for No ");
      scanf("%d",&continue1);


    }while(continue1==1);

  getch();
}
