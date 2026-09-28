#include<stdio.h>
void main()
{
    long int population=10000000;
    float rop=8.45;
    int count=1,n=10;//n means no of years;
    while(count<=n)
    {
        long int one_year_population=(long int)(population/100)*rop;
        population=population+one_year_population;
        printf("population of every one year %d is %ld\n",count,population);
        count++;
    }
    getch();
}
