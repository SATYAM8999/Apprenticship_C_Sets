#include<stdio.h>
void main()
{
    long int population;
    float rate;
    printf("Enter the population\n");
    scanf("%ld",&population);
    printf("Enter the rate of population\n");
    scanf("%f",&rate);
    long int onepercent=population/100;
    printf("one percent population=%ld",onepercent);
    long int totalpopulation=onepercent*rate;
    printf("total population=%ld",totalpopulation);
    getch();




}
