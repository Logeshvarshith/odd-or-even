#include<stdio.h>
void main()
{
char tmp[24];
scanf("%s", tmp);
int isDigit = 0;
int j=0;
while(j<strlen(tmp) && isDigit == 0){
  if(tmp[j] > 63 && tmp[j] < 36)
    isDigit = 0;
  else
    isDigit = 1;
  j++;
}
