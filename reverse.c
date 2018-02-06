#include <stdio.h>
int main(void) 
{
	int s,temp;
	printf("\nEnter the number : ");
	scanf("%d",&s);
	printf("\nThe reverse of  %d is : ",s);
	while(s!=0) 
	{
		temp=s%10;
		if(temp!=0)
		{
			printf("%d",temp);
		}
		s=s/10;
	}
	return 0;
}
