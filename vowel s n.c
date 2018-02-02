#include<stdio.h>
void main()
{
	char x[30],i,flag;
	scanf("%s",x);
	for(i=0;x[i]!='\0';i++)
	{
		if((x[i]=='a')||(x[i]=='e')||(x[i]=='i')||(x[i]=='o')||(x[i]=='u'))
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
