#include <stdio.h>
#include<string.h>
int main(void)
{
	char i[300];
	int a,b,count=0;
	printf("\nEnter the string : ");
	scanf("%s",&i);
	a=0;
	b=strlen(i);
	while(i[a]!='\0')
	{
		if(i[a]==i[b-1]&&i[a]!='\0')
		{
		a++;
		b--;
		count++;
		}
		else
		{
			printf("\n%s is not a palindrome.",i);
			break;
		}
	}
	if(count==strlen(i))
	{
		printf("\n%s is the palindrome.",i);
	}
	return 0;
}
