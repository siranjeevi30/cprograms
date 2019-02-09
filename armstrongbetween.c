#include <stdio.h>

int main(void)
{
	int i,n,k,a,b,sum=0,rem=0,cube=0;
	scanf("%d %d",&n,&k);
	for(i=n+1;i<k;i++)
	{
		a=i;
		b=i;
	while(a!=0)
	{
		a=a/10;
	}
		
	while(b!=0)
	{
		rem=b%10;
		sum=sum+(rem*rem*rem);
		b=b/10;
	}
	if(i==sum)
	{
		printf("%d\t",sum);
	}
	n=0;
	sum=0;
    }
	return 0;
}

