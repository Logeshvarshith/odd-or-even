#include <stdio.h>
int main(void)
{
	int a[300],n,sum=0,i;
	printf("\nEnter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+x[i];
	}
	printf("\nThe sum is %d.",sum);
	return 0;
}
