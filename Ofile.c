/*************************************************************************
	> File Name: Ofile.c
	> Author: 
	> Mail: 
	> Created Time: 日  8/21 20:03:02 2016
 ************************************************************************/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
int fd;
ssize_t num;
    char  buff[100];
    int fp=open("txt",O_RDWR|O_CREAT);
    scanf("%s",buff);
    write(fp,buff,sizeof(buff));
    //read(fp,buff,sizeof(buff));
printf("读取为：%s",buff);
    close(fp);
    return 0;
}
