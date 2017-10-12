#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<strings.h>
#define MYPORT 3490
int main()
{
	int sockfd;
	struct sockaddr_in my_addr;
	sockfd = socket(AF_INET,SOCK_STREAM,0);
	my_addr.sin_family = AF_INET;
	my_addr.sin_port =  htons(MYPORT);
	my_addr.sin_addr.s_addr = inet_addr("132.241.5.10");
	bzero(&(my_addr.sin_zero),sizeof(my_addr.sin_zero));
	bind(sockfd,(struct sockaddr *)&my_addr, sizeof(struct sockaddr));
	return 0;
}
