#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
	char Fname[30];
	char Data[7];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;     // Return OS
	}
	else
	{
		printf("File succesfully opend with FD : %d\n",fd);
	}

	iRet = read(fd,Data,7);
	
	printf("%d bytes gets succfully read from the file\n",iRet);
	
	printf("Data from the file is :%s\n",Data);

	return 0;
}