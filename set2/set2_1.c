#include<stdio.h>
void main()
{
    int physics,chemistry,math;
    printf("Enter the marks of Physics,Chemistry,Math");
    scanf("%d%d%d",&physics,&chemistry,&math);
    float average=(float)(physics+chemistry+math)/3;
    printf("Average of Marks=%f\n",average);
    getch();
}
