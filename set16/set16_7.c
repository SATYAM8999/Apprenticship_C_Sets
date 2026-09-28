#include<stdio.h>
void main()
{
    long int principle_amount=20000;
    float roi=7.30;
    int count=1;
    long int double_amount=2*principle_amount;
    while(principle_amount<double_amount)
    {
         long int one_year_Increment_amount=(long int)(principle_amount/100)*roi;
         principle_amount=principle_amount+one_year_Increment_amount;
         printf("Amount at every end of %d year is %ld\n",count,principle_amount);
         count++;
    }
    getch();
}
