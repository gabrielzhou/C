#define _POSIX_C_SOURCE 199309
#include<stdio.h>
#include<time.h>
#include<errno.h>

int main()
{
	int ret;
	struct timespec req ={ .tv_sec =0,
				.tv_nsec =200};
	ret = nanosleep(&req,NULL);
	if(ret)
		perror("nanosleep");
	req.tv_sec =0;
	req.tv_nsec =1369;
	struct timespec rem;
	retry:
	ret=nanosleep(&req,&rem);
	if(ret){
		if(errno==EINTR) {
		req.tv_sec=rem.tv_sec;
		req.tv_nsec=rem.tv_nsec;
		goto retry;
		}
		perror("nanosleep");
	}
	return 0;
}
