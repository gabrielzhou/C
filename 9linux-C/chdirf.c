#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<fcntl.h>

int main(int argc,char *argv[])
{
int swd_f,ret;

swd_f=open(".",O_RDONLY);
if(swd_f==-1)
	perror("open");


	ret=chdir(argv[1]);
	if(ret==-1){
	perror("chdir");
	exit(EXIT_FAILURE);
	}

	ret=fchdir(swd_f);
	if(ret){
		perror("fchdir");
		exit(EXIT_FAILURE);
	}
	ret=close(swd_f);
	if(ret){
		perror("close");
		exit(EXIT_FAILURE);
	}
	return 0;
}
