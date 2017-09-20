#include<stdio.h>
#include<time.h>

int main()
{
	timer_t timer;
	struct itimerspec ts;
	int ret;
	
	ret=timer_gettime(timer,&ts);
	if(ret)
		perror("timer_gettime");
	else{
		printf("current sec=%ld nsec=%ld\n",ts.it_value.tv_sec,ts.it_value.tv_nsec);
		printf("next sec=%ld nsec=%ld\n",ts.it_interval.tv_sec,ts.it_interval.tv_nsec);
}
	return 0;
}
