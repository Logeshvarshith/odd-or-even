 
#include<stdio.h>
int main()
{
  int Num, i, Sum = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &Num);
  
  for(i = 1; i <= Num; i++)
  {
     Sum = Sum + i;
  }
  
  printf("Sum of Natural Num = %d", Sum);
  return 0;
}
