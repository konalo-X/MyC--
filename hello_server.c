//
//  main.c
//  hello_server
//
//  Created by XiongGuang on 16/8/20.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>
void error_handling(char * message);

int main(int argc,char *argv[])
{
    int serv_sock;
    int clnt_sock;
    
    struct sockaddr_in serv_addr;
    struct sockaddr_in clnt_addr;
    
    socklen_t clnt_addr_size;
    
    char message[100];
    
    //if (argc!=2) {
      //  printf("Usage: %s <port>\n",argv[0]);
        //exit(1);
    //}
    
    serv_sock=socket(PF_INET, SOCK_STREAM, 0);//创建套接字
    
    if(serv_sock==-1)
        error_handling("socket() error");
    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr=htonl(INADDR_ANY);
    serv_addr.sin_port=htons(9000);
    
    if (bind(serv_sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr))==-1) {//调用bind分配IP 和端口号
        error_handling("bind() error");
    }
    
    if(listen(serv_sock, 5)==-1)//调用listen 讲套接字转为 可接收连接状态
    {
        error_handling("listen() error");
    }
    
    clnt_addr_size=sizeof(clnt_addr);
    clnt_sock=accept(serv_sock, (struct sockaddr*)& clnt_addr, & clnt_addr_size);//调用accept 函数 受理连接请求 如果在没有连接的情况下调用该函数，则不会又返回，直到有连接请求为止
    if (clnt_sock==-1)
        error_handling("accept() error");

        while(read(clnt_sock,message,sizeof(message)-1))
        printf("from client : %s\n",message );
        //write(clnt_sock, message, sizeof(message));//write 用于传输数据
        close(clnt_sock);
        close(serv_sock);
        return 0;
}

void error_handling(char *message)
{
    fputs(message, stderr);
    fputc('\n', stderr);
    exit(1);
}
