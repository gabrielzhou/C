#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>


int main(int argc,char *argv[])
{
	int ret,ret1,test;
	ret = truncate(argv[1],345);
	if(ret ==-1){
		printf("can not truncate the %s",argv[1]);
		return -1;
	}
	else
	    printf("the %s \'operate is ok\n",argv[1]);
	test = open(argv[1],O_RDWR);
	ret1 = ftruncate(test,330);
	if(ret1 ==-1){
		printf("can not truncate the %s by ftruncate\n",argv[1]);
		return -1;
	}
	else
		printf("the %s \'operate is ok\n",argv[1]);	
	close(test);	
	return 0;
	
}
