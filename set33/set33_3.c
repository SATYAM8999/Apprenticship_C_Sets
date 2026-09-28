#include<stdio.h.>
void main()
{
    int *p1,x;
    float *p2,y;
    char *p3,ch;
    p1=&x;
    p2=&y;
    p3=&ch;
    printf("Enter the integer ,float and character\n");
    scanf("%d%f%s",p1,p2,p3);

    printf("\nvalue of integer is %d and their address:%d\n",*p1,p1);
    printf("\nvalue of float is %f and their address is:%d\n",*p2,p2);
    printf("\nvalue of char is %s and their address is \n:%d",*p3,p3);
    getch();

}
