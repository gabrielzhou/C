#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
	int ret;
	ret=link(argv[1],argv[2]);
	if(ret)
		perror("link");
	return 0;
}
