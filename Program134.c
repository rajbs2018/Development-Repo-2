#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0x00000840;
	UINT iResult = 0;
	
	iResult = iNo & iMask;
	
	if(iMask == iResult)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}	

int main()
{
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = CheckBit(iValue);
	
	if(bRet ==true)
	{
		printf("7th ^& 12th bit is ON\n");
	}
	else 
	{
		printf("bit are OFF\n");
	}
	return 0;
}