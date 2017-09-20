#include<stdio.h>
#include<alloca.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int open_sysconf(const char *file,int flags,int mode)
{
	const char *etc = "/etc/";
	char *name;
	name=alloca(strlen(etc) + strlen(file)+1);
	strcpy(name,etc);
	strcat(name,file);
	return open(name,flags,mode);
}

int main(int argc,char *argv[])
{
	int ret;
	char *buff;
	ret=open_sysconf(argv[1],O_RDONLY,S_IRWXU);
	if(ret==-1)
		perror("open");
	read(ret,buff,1024);
	printf("%s",buff);
	return 0;
}

