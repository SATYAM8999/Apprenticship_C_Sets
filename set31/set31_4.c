#include<stdio.h>
struct dt
{
    int real,imag;
};
typedef struct dt complex;
complex getComplexSum(complex,complex);
void main()
{
    complex c1,c2;
    printf("Enter the first complex number");
    scanf("%d%d",&c1.real,&c1.imag);
    printf("Enter the second complex number");
    scanf("%d%d",&c2.real,&c2.imag);
    complex sum=getComplexSum(c1,c2);
    printf("Complex number sum=%d+%di",sum.real,sum.imag);

    getch();


}
complex getComplexSum(complex a,complex b)
{
    complex c3;
    c3.real=a.real+b.real;
    c3.imag=a.imag+b.imag;
    return c3;
}

