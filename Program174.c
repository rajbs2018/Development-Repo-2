#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	
	fd = open("LB17.txt",O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		
	}
	
	// 0   From starting position
	// 1   From current position
	// 2   Fromend of te file
	
	lseek(fd,10,2);
	
	printf("Data from file is: \n");
	
	write(1," ",1);
	
	printf("\n");
	
	close(fd);
	
	return 0;
}