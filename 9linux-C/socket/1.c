#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

int main()
{
	struct sockaddr_in ina1,ina2;
	char *a1,*a2;
	ina1.sin_addr.s_addr = inet_addr("132.241.5.10");
	ina2.sin_addr.s_addr = inet_addr("152.241.5.10");
	a1 = inet_ntoa(ina1.sin_addr);
	a2 = inet_ntoa(ina2.sin_addr);
	printf("address 1:%s\n",a1);
	printf("address 2:%s\n",a2);
	printf("address 1:%ld\n",ina1.sin_addr.s_addr);
	printf("address 2:%ld\n",ina2.sin_addr.s_addr);
	return 0;
}
	
