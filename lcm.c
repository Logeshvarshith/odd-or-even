#include<stdio.h>
void main()
{
int x,y,min,l;
scanf("%d%d",&x,&y);
min=(x<y)?x:y;
for(min=2; min <= x && min <= y; ++min)
{
if((x%min==0)&&(y%min==0))
{
  break;
}
}
l=(x*y)/min;
printf("LCM of given number is = %d",l);
}

