#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
	int ret;
	ret=rename(argv[1],argv[2]);
	if(ret)
		perror("rename");
	return 0;
}
