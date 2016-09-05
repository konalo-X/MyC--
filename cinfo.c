#include<stdlib.h>
#include<stdio.h>
int main()
{
#ifdef DEBUG
printf("Comliled: "_DATE_" at "_TIME_ "\n");
printf("This is line %d of file %s\n",_LINE_,_FILE_);
#endif
printf("haha");
printf("hello world \n");
exit(0);
}
