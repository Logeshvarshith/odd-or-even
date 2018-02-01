#include <stdio.h>
int main(void)
{
	int n,t,i,j,b[300];
	printf("\nEnter the num: ");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
		t=n%10;
		b[i]=t;
		n=n/10;
		i++;
	}
	printf("\nThe digits are: ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d\t",b[j]);
	}
return 0;
}
