#include<stdio.h>
void main()
{
   int fehrenheit;
   printf("Enter the temprecture in ferenheit");
   scanf("%d",&fehrenheit);
   float celcius=(float)(fehrenheit-32)*5/9;
   //int celcius=(fehrenheit-32)*(5/9);
   printf("After convert fehrenheit to celsius =%f",celcius);
   getch();
}

