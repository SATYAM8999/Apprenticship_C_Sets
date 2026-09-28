#include<stdio.h>
void main()
{
    int continue_choice;
    do
    {
    char ch;
    //int continue_choice;
    printf("Enter the Character in lower case\n");
    scanf("%c",&ch);
        switch(ch)
        {
            case 'r':printf("RED");
                     break;
            case 'o':printf("ORANGE");
                     break;
            case 'g':printf("GREEN");
                     break;
            case 'y':printf("YELLOW");
                     break;
            case 'i':printf("INDIGO");
                     break;
            case 'b':printf("BLUE");
                     break;
            case 'v':printf("VOILET");
                     break;
            default:printf("Inlalid Choice");
                     break;
        }
     printf("\nDo You Wont To Continue Press 1 for YES and Press 0 for NO\n");
     scanf("%d",&continue_choice);

    }while(continue_choice==1);

    getch();
}
