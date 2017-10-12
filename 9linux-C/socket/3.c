#include<stdio.h>
#include<strings.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#define DEST_IP "132.241.5.10"
#define DEST_PORT 23
int main()
{
	int sockfd,err;
	struct sockaddr_in dest_addr;
	sockfd = socket(AF_INET,SOCK_STREAM,0);
	dest_addr.sin_family = AF_INET;
	dest_addr.sin_port = htons(DEST_PORT);
	dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);
	bzero(&(dest_addr.sin_zero),sizeof(dest_addr.sin_zero));
	err=connect(sockfd,(struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
	if(err == -1)
		perror("can not connect");
	return 0;
}
	
