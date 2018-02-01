#include<stdio.h>
 void main()
{
  int i,n,Sum=0,num;
  float Avg;
 printf("\nPlease Enter How many Num you want?\n");
  scanf("%d",&n);
 printf("\nPlease Enter the elements one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&num);
     Sum = Sum +num;
   }
 Avg = Sum/n;
 printf("\nSum of the %d Num = %d",n, Sum);
  printf("\nAvg of the %d Num = %.2f",n, Avg);
return 0;
}
