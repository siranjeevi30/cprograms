#include <stdio.h>

int main(void)
{
	int a[20],n,k,i,q=0;
	scanf("%d %d\n",&n,&k);
	for(i=0;i<n;i++)
	{ 
		scanf("%d\t",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		q=q+a[i];
	}
	printf("%d",q);
	
	return 0;
	
}
