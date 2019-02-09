#include <stdio.h>

int main(void)
{
	int n,a,sum=0,rem=0,cube=0;
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(a==sum)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
