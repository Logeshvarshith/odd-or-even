#include<stdio.h>
int main()
{
char x[50];
int y[50],i;
scanf("%s",x);
for(i=0;x[i]!='\0';i++)
{
 if(x[i]>=0&&x[i]<=49)
 {
 printf("%d",x[i]); 
 }
}
return 0;
}
