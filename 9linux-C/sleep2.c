#include<stdio.h>
#include<time.h>

int main()
{
	struct timespec ts;
	int ret;
	ret=clock_gettime(CLOCK_MONOTONIC,&ts);
	if(ret){
		perror("clock_gettime");
		return;
	}
	ts.tv_sec +=1;
	printf("we want to sleep until sec=%ld nsec=%ld\n",ts.tv_sec,ts.tv_nsec);
	ret = clock_nanosleep(CLOCK_MONOTONIC,TIMER_ABSTIME,&ts,NULL);
	if(ret)
		perror("clock_nanosleep");
	return 0;
}
