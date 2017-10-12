#include<stdio.h>
#include<netdb.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<arpa/inet.h>

int main(int argc,char *argv[])
{
	struct hostent *hostent1;
	hostent1 = gethostbyname(argv[1]);
	printf("%s\n",hostent1->h_name);
	printf("%d\n",hostent1->h_addrtype);
	printf("%d\n",hostent1->h_length);
	printf("%s\n",inet_ntoa(*(( struct in_addr *)hostent1->h_addr)));
	return 0;
}
