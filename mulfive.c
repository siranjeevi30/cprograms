#include <stdio.h>

int main(void)
{
	int n,i,mul=0;
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
	  mul=mul+n;
	  printf("%d\t",mul);
	}
	
	return 0;
}
