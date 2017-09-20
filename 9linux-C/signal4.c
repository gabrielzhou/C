#include<sys/types.h>
#include<signal.h>
#include<stdio.h>

int main()
{
	int ret;
	ret=kill(13636,SIGINT);
	if(ret==-1)
		perror("kill");
	return 0;
}
