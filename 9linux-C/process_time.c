#include<stdio.h>
#include<sys/times.h>
#include<unistd.h>

int main()
{
	int ret;
	struct tms tv;
	sleep(3);
	ret=times(&tv);
	if(ret==-1)
		perror("times");
	printf("utime:%lu,stime:%lu,cutime:%lu,cstime:%lu\n",tv.tms_utime,tv.tms_stime,tv.tms_cutime,tv.tms_cstime);
	return 0;
}
	
