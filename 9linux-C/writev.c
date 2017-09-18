#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<sys/uio.h>

int main()
{
	struct iovec iov[3];
	ssize_t nr;
	int fd,i;
	char *buf[]={
		"the term buccaneer comes from the word boucan.\n",
		"A boucan is a wooden frame used for cooking meat.\n",
		"Buccaneer is the west indies name for a pirate.\n" };
	fd = open("buccaneer.txt", O_WRONLY|O_CREAT | O_TRUNC|S_IRWXU);
	if(fd==-1){
		perror("open");
		return 1;
	}
	for(i=0;i<3;i++){
	iov[i].iov_base=buf[i];
	iov[i].iov_len = strlen(buf[i]);
	}
	nr =writev(fd,iov,3);
	if(nr==-1){
		perror("wirtev");
		return 1;
	}
	printf("wrote %d byte\n",nr);
	if(close(fd)){
		perror("close");
		return 1;
	}
	return 0;
}
