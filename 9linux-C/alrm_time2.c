#include<stdio.h>
#include<signal.h>
#include<time.h>

void timer_create_1(timer_t timer)
{
		struct sigevent evp;
	int ret;
	evp.sigev_value.sival_ptr=&timer;
	evp.sigev_notify= SIGEV_SIGNAL;
	evp.sigev_signo = SIGUSR1;
	ret=timer_create(CLOCK_PROCESS_CPUTIME_ID,&evp,&timer);
	if(ret)
		perror("timer_create");
}
	
void timer_set_time1(timer_t timer)
{
	struct itimerspec ts;
	int ret;
	ts.it_interval.tv_sec=1;
	ts.it_interval.tv_nsec=0;
	ts.it_value.tv_sec = 1;
	ts.it_value.tv_nsec=0;
	ret=timer_settime(timer,0,&ts,NULL);
	if(ret)
		perror("timer_settime");
}
int main()
{
	timer_t timer;
	timer_create_1(timer);
	timer_set_time1(timer);
	return 0;
}
