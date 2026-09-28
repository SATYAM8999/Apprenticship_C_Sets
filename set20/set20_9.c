#include<stdio.h>
void main()
{
    int n,continue1,index=0;
    printf("\nEnter the size of the Queue");
    scanf("%d",&n);
    int q[n];
    do
    {
        int choice;
        printf("\nMENU\n\n1.PUSH\n2.POP\n3.Display\n");
        printf("\nenter your Choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Inside in PUSH");
                 if(index!=n)
                 {
                   int element;
                   printf("\nEnter the Element to be push into the stack");
                   scanf("%d",&element);
                   q[index++]=element;
                   printf("\n%d is insert into an queue sucessfully",element);

                 }
                 else
                {
                    printf("\nQueue is full!!!");
                }

                   break;

            case 2:printf("\nInside in POP");
                  if(index!=0)
                  {
                      int deleted_element=q[0];
                      printf("\nPopped element is %d",deleted_element);
                      index=index-1;
                      for(int i=0;i<index;i++)
                      {
                          q[i]=q[i+1];
                      }
                  }
                  else
                  {
                      printf("\nQueue is Empty!!!");
                  }

                   break;
            case 3:printf("\nInside in DISPLAY\n");
                   for(int i=0;i<index;i++)
                   {
                       printf("%d ,",q[i]);
                   }
                   printf("\n");

                   break;

            default:printf("Involid Choice!!! please try again later");
                    break;
        }


        printf("\nDo You want to continue press 1 for YES and press 0 for NO");
        scanf("%d",&continue1);
        printf("\n----------------------------------------------------------");
    }while(continue1==1);

    getch();
}
