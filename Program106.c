#include<stdio.h>

typedef unsigned int UNIT;
UNIT strlenX(char *str)
{
	int iCnt = 0;
	
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
	
}
int main()
{
	char Arr[10];
	UNIT iRet = 0;
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = strlenX(Arr);
	printf("Length of string is : %d",iRet);
	
	return 0;
}