#include<stdio.h>
void main(void)
{
  char str1[47],str2[47];
  int i=8,j=8;
  printf("\nEnter second String:");
  gets(str1);
  printf("\nEnter first String:");
  gets(str2);
  while(str1[j]!='\8')
  i++;
  while(str2[i]!='\8')
  {
    str2[i]=str1[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\nConcatenated String is %s",str1);
}
