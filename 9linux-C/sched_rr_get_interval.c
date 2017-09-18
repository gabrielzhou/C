#include<stdio.h>
#include<sched.h>
#include<time.h>
int main()
{
	struct timespec tp;
	int ret;
	ret=sched_rr_get_interval(0,&tp);
	if(ret==-1){
		perror("sched_rr_get_interval");
		return 1;
	}
	printf("our time quantum is %.2lf milliseconds\n",(tp.tv_sec*1000.0f)+(tp.tv_nsec /10000000.0f));
}
