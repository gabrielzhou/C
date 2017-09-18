#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
	int ret,ret1,ret2;
	if(argc<2){
		printf("usage:%s <file>\n",argv[0]);
		return 1;
	}
	ret=chmod(argv[1],S_IRWXG);
	if(ret==-1)
		perror("chmod");
	ret1=open(argv[2],O_RDONLY);
	if(ret1==-1)
		perror("open");
	ret2=fchmod(ret1,S_IRWXO);
	if(ret2==-1)
		perror("chmod");
	return 0;
}
