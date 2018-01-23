#include<stdio.h>
int main()
{
      int hrs, min,total_min;
      printf("\nEnter the Time in Hrs and Min:\n");
      printf("\nHrs:\t");
      scanf("%d", &hrs);
      printf("\nMin:\t");
      scanf("%d", &minutes);
       total_min = (hrs * 60) + min;
      printf("\nTotal Time in Min:\t%d\n", total_min);
      return 0;
}
