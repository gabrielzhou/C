#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int is_on_physical_device(int fd)
{
	struct stat sb1;
	int ret;
	ret=fstat(fd,&sb1);
	if(ret==-1){
		perror("fstat");
		return -1;
	}
	return gnu_dev_major(sb1.st_dev);
}
int main(int argc,char *argv[])
{
	struct stat sb;
	int ret;
	
	if(argc<2){
		fprintf(stderr,"usage:%s<file>\n",argv[0]);
		return 1;
	}
	ret=stat(argv[1],&sb);
	if(ret){
		perror("stat");
		return 1;
	}
	printf("%s is %ld bytes\n",argv[1],sb.st_size);
	ret = open(argv[1],O_RDONLY);
	if(ret==-1){
		perror("open");
		return 1;
	}
	printf("%s is physical file, and it's dev is %d",argv[0],is_on_physical_device(ret));
	return 0;
}
