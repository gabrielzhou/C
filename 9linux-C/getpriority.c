#include<sys/time.h>
#include<sys/resource.h>
#include<stdio.h>
#include<unistd.h>
#include<errno.h>

int main()
{
	int ret;

	errno=0;
	ret =getpriority(PRIO_PROCESS,0);
	printf("nice value is %d\n",ret);
	ret=nice(10);
	if(ret==-1&&errno!=0)
		perror("nice");
	else
		printf("nice value is now %d\n",ret);
	ret =getpriority(PRIO_PROCESS,0);
	printf("nice value is %d\n",ret);
	ret = setpriority(PRIO_PROCESS,0,15);
	if(ret==-1)
		perror("setpriority");
	ret =getpriority(PRIO_PROCESS,0);
	printf("nice value is %d\n",ret);
	return 0;
}
