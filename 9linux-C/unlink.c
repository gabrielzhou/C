#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	int ret;
	ret=unlink(argv[1]);
	if(ret==-1)
		perror("unlink link");
	ret=remove(argv[2]);
	if(ret==-1)
		perror("remove symlink");
	return 0;
}
