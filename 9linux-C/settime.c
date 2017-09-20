#define _SVID_SOURCE
#include<stdio.h>
#include<time.h>

int main()
{
	int ret;
	time_t t,t1;
	time(&t);
	t1 = t - 10000;
	ret=stime(&t1);
	if(ret==-1)
		perror("stime");
	printf("the time is %lu",(long) t1);
	sleep(5);
	ret=stime(&t);
	if(ret==-1)
		perror("stime");
	printf("the time is %lu",(long) t);
	return 0;
}
		
	
	

