#include <stdio.h>
#include <string.h>

int main(void)  
{
	char c;
	scanf("%s",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
	 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	  {
		printf("Vowel");
	  }
	 else 
	  {
		printf("consonant");
	  }
	}
	else
	{
		printf("invalid");
	}
	
	// your code goes here
	return 0;
}
