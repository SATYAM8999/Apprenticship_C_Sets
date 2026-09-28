#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *pint;
    float *pfloat;
    char *pchar;
    pint=malloc(sizeof(int));
    pfloat=malloc(sizeof(float));
    pchar=malloc(sizeof(char));
    printf("Enter the integar,float and character values:\n");
    scanf("%d %f %c",pint,pfloat,pchar);
    printf("\nInteger value is %d and their address is %d",*pint,pint);
    printf("\nFloat value is %f and their address is %d ",*pfloat,pfloat);
    printf("\nCharacter value is %c and their address is %d ",*pchar,pchar);
    getch();
}
