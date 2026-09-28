#include<stdio.h>
int getPopulation(long int,float);
void main()
{
    long int population=10000000;
    float rog=4.5;
   // printf("Enter the population and enter the rate of groth");
    //scanf("%ld%d",&population,&rog);

    int yop=getPopulation(population,rog);
    printf("number of years that population is doubled=%d",yop);

    getch();

}
int getPopulation(long int pop,float rate)
{
    long int double_population=2*pop;
    int count=0;

    while(pop<=double_population)
    {
        long int one_percent_population=(long int)(pop/100)*rate;
        pop=pop+one_percent_population;
        count=count+1;

    }
    return count;
}
