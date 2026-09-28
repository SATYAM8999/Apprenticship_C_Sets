#include<stdio.h>
void main()
{
  int second;
  printf("Enter the seconds:");
  scanf("%d",&second);
  int hour=second/3600;
  int r1=second%3600;
  int minute=r1/60;
  int seconds=r1%60;
  printf("Hours=%d\n",hour);
  printf("Minutes=%d\n",minute);
  printf("seconds=%d",seconds);
  getch();

}
