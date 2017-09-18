#include<stdio.h>
#include<sys/types.h>
#include<xattr.h>

int main(int argc,char *argv[])
{
	const char *ch1;
	void *ch2;
	size_t size2;
	size2=getxattr(argv[1],ch1,ch2,1024);
	if(size2==-1)
		perror("getxattr");
	printf("length is %d",size2);
	return 0;
}
