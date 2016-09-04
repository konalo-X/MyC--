#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<arpa/inet.h>
#include<sys/socket.h>
//#include<iostream>
//using std::cin;
void error_handling(char *message);

int main(int argc,char * argv[])
{
	int sock;
	struct sockaddr_in serv_addr;
	char message[100];//="hello socket";
	int str_len;
char *ip="192.168.31.176";
	// if (argc!=3)
	// {
	// 	printf("Usage : %s <IP> <port>\n",argv[0] );
	// 	exit(1);
	// }

	sock=socket(PF_INET,SOCK_STREAM,0);

	if (sock==-1)
	{
		error_handling("socket() error");
	}

	memset(&serv_addr,0,sizeof(serv_addr));

	serv_addr.sin_family=AF_INET;
	serv_addr.sin_addr.s_addr=inet_addr(ip);
	serv_addr.sin_port=htons("9000");

	connect(sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr));

		//str_len=read(sock,message,sizeof(message)-1);
//int fd=open("data.txt",O_RDONLY);
//read(fd,message,sizeof(message));
printf("Enter a message");
	while(getchar()!='q')
	{
		scanf("%s",message);
	//printf("%s\n",message );
	write(sock, message, sizeof(message));//write 用于传输数据
}
	//	printf("Message from server : %s\n",message );

		close(sock);
		return 0;
}

void error_handling(char * message)
{
	fputs(message,stderr);
	fputc('\n',stderr);
	exit(1);
}
