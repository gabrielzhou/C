#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
	int ret;
	ret=symlink(argv[1],argv[2]);
	if(ret)
		perror("symlink");
	return 0;
}
