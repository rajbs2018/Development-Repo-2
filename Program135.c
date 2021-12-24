#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0x0000000f;
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
		printf("First 4 bit are ON\n");
	}
	else 
	{
		printf("bit are OFF\n");
	}
	return 0;
}