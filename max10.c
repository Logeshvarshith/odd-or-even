#include <stdio.h>
int main()
{
 int a[10],i,gre;
 printf("Enter ten values:");
for (i = 0; i < 10; i++)
{
  scanf("%d", &a[i]);
 }
 gre = a[0];
for (i = 0; i < 10; i++)
{
  if (a[i] > gre)
{
   gre = a[i];
  }
 }
 printf("\nGre of ten numbers is %d", gre);
 return 0;
