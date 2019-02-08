#include <stdio.h>
#include <string.h>

int main(void)  
{
	char c;
	scanf("%s",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
	 
		printf("Alphabet");
	  }
	 else 
	  {
		printf("No");
	  }
	return 0;
}

