#include <stdio.h>

int main(void) 
{
	int a;
	scanf("%d",&a);
	if(a%400==0)
	{
		printf("yes");
	}
	else if(a%100==0)
	{
		printf("no");
	}
	else if(a%4==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	// your code goes here
	return 0;
	
}
