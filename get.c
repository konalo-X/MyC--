/*************************************************************************
	> File Name: get.c
	> Author: 
	> Mail: 
	> Created Time: 六  8/20 16:30:27 2016
 ************************************************************************/

#include<stdio.h>
int main()
{
   char * message;
open("data.txt");
    fgets(message,10,"data.txt");
    printf("%s ",message);
    return 0;
}
