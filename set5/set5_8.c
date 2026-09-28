#include<stdio.h>
void main()
{
    int x=5;
    x&=4;

    int y=5;
    y|=4;

    int z=5;
    z^=3;
    printf("Bitwise and operation=%d\n",x);
    printf("Bitwise OR operation=%d\n",y);
    printf("Bitwise XOR operation=%d\n",z);
    getch();
}
