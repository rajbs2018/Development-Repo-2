#include<stdio.h>
#include<stdbool.h>


int SmallToCapital(char c)
{
	if((c >= 'A') && (c <= 'Z'))
	{
		return c + 32;
	}
	
	
}
int main()
{
	char ch = '\0', CRet = '\0';
	
	printf("Enter Character \n");
	scanf("%c",&ch);
	CRet = SmallToCapital(ch);
	
	printf("Capital letter is :%c\n",CRet);
	
	return 0;
}