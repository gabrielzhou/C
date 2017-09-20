#include<stdio.h>
#include<signal.h>

int main()
{
	union sigval value;
	int ret;
	value.sival_int = 404;
	ret=sigqueue(1722,SIGUSR2,value);
	if(ret)
		perror("sigqueue");
	return 0;
}
