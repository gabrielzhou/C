#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<strings.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<sys/wait.h>
#include<netdb.h>
#include<arpa/inet.h>
#define PORT 3490
#define MAXDATASIZE 100
int main(int argc,char *argv[])
{
	int sockfd,numbytes;
	char buf[MAXDATASIZE];
	struct hostent *he;
	struct sockaddr_in their_addr;
	if(argc !=2){
		fprintf(stderr,"usage:client hostname\n");
		exit(1);
	}
	if((he=gethostbyname(argv[1])) == NULL){
		perror("gethostbyname");
		exit(1);
	}
	if((sockfd=socket(AF_INET,SOCK_STREAM,0)) == -1){
		perror("socket");
		exit(1);
	}
	their_addr.sin_family = AF_INET;
	their_addr.sin_port = htons(PORT);
	their_addr.sin_addr=*((struct in_addr *)he->h_addr);
	bzero(&(their_addr.sin_zero),sizeof(their_addr.sin_zero));
	if(connect(sockfd,(struct sockaddr *)&their_addr,sizeof(struct sockaddr_in)) == -1){
		perror("connent");
		exit(1);
	 }
	if((numbytes = recv(sockfd,buf,MAXDATASIZE,0))== -1){
		perror("recv");
		exit(1);
	}
	buf[numbytes]='\0';
	printf("Receive:%s",buf);
	close(sockfd);
	return 0;
}