#include <stdio.h>
int main(void)
{
	int x,y,gcd,i,min;
	printf("\nEnter the two numbers : ");
	scanf("%d",&x);
	scanf("%d",&y);
	min=(x<y)?x:y;
	for(i=1;i<=min;i++)
	{
		if(x%i==0&&y%i==0)
		{
			gcd=i;
		}
	}
	printf("\nThe GCD of %d and %d is %d.",x,y,gcd);
	return 0;
}
