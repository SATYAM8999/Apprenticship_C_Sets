#include<stdio.h>
union ut
{
    int real,imag;
};
typedef union ut complex;
complex getComplexSum(complex,complex);
void main()
{
    complex c1,c2;
    c1.real=2;
    c1.imag=3;
    c2.real=4;
    c2.imag=1;
    complex addition=getComplexSum(c1,c2);
    printf("\n%d %d i",c1.real,c1.imag);
    printf("\n%d %d i",c2.real,c2.imag);
    printf("\n-------------\n");
    printf("\n%d %d i",addition.real,addition.imag);


}
complex getComplexSum(complex c1,complex c2)
{
    complex sum;
    sum.real=c1.real+c2.real;
    sum.imag=c1.imag+c2.imag;
    return sum;
}
