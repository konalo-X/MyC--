#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

#define BUF_SIZE 100

void error(char * message);

int main(void)
{
	int fd;
	char buff[BUF_SIZE];

	fd=open("ofile.txt",O_RDONLY);
	if(fd==-1)
		error("open file");
	printf("文件描述符为 %d\n",fd);
int rd;
rd=read(fd,buff,sizeof(buff));
	if(rd==-1)
		error("read fail");
	printf("file data: %s",buff);

	close(fd);

	return 0;
} 

void error(char * message)
{
	printf("%s",message);
}
