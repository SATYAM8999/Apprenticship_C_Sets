#include<stdio.h>
float getAverage(int,int,int);
void main()
{
    float num1,num2,num3;
    printf("Enter the three numbers");
    scanf("%f%f%f",&num1,&num2,&num3);

    float result=getAverage(num1,num2,num3);
    printf("Average of Three Numbers=%f",result);


 getch();


}
float getAverage(int a,int b,int c)
{
    float average=(float)(a+b+c)/3;

    return average;
}
