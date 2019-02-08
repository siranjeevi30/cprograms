#include <stdio.h>

int main(void)
{
	int n,k,i=0,h=1;
	scanf("%d %d",&n,&k);
	while(i<k)
	{
		h=n*h;
		i++;
	}
	printf("%d",h);
	return 0;
}
