#include<stdio.h>
#include<sys/types.h>
#include<sys/time.h>
#include<unistd.h>
int main()
{
	struct timeval tv = { .tv_sec= 0,
				.tv_usec=757};
	select(0,NULL,NULL,NULL,&tv);
	return 0;
}

