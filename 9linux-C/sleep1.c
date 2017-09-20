#include<stdio.h>
#include<time.h>

int main()
{
	struct timespec ts = {.tv_sec=1,.tv_nsec=500000000};
	int ret;
	ret=clock_nanosleep(CLOCK_MONOTONIC,0,&ts,NULL);
	if(ret)
		perror("clock_nanosleep");
	return 0;
}
