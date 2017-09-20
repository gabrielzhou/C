#include<stdio.h>
#include<sys/time.h>

int main()
{
	struct timeval tv;
	int ret;
	ret=gettimeofday(&tv,NULL);
	if(ret)
		perror("gettimeofday");
	else
		printf("seconds=%d useconds=%d\n",(int)tv.tv_sec,(int)tv.tv_usec);
	return 0;
}
