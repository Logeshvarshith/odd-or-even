#include <stdio.h>
 int main(void)
{
	int n,x[300],i=0,j,temp,p=1,y;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	y=n;
	while(n>0)
	{
		temp=n%10;
		x[i]=temp;
		n=n/10;
		i++;
	}
	for(j=0;j<i;j++)
	{
		p=p*x[j];
	}
	printf("\nThe product of the digits in %d is %d. ",y,p);
	return 0;
}


