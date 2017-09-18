#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	int ret;
	if(argc<2){
		printf("usage:%s need argument",argv[0]);
		return -1;
	}
	ret=rmdir(argv[1]);
	if(ret==-1){
		perror("rmdir");
		return 1;
	}
	return 0;
}
