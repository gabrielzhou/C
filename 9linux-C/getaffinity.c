#define _GNU_SOURCE
#include<stdio.h>
#include<sched.h>
int main()
{
//typedef struct cpu_set_t;
//size_t CPU_SETSIZE;

cpu_set_t set;
int ret,i;
CPU_ZERO(&set);
ret=sched_getaffinity(0,sizeof(cpu_set_t),&set);
if(ret==-1)
	perror("sched_getaffinity");
for(i=0;i<CPU_SETSIZE;i++){
	int cpu;
	cpu = CPU_ISSET(i,&set);
	printf("cpu=%i is %s\n",i,cpu?"set":"unset");
}
	CPU_ZERO(&set);
	CPU_SET(0,&set);
	CPU_CLR(1,&set);
	ret=sched_setaffinity(0,sizeof(cpu_set_t),&set);
	if(ret==-1)
		perror("sched_setaffinity"); 
	for(i=0;i<CPU_SETSIZE;i++){
		int cpu;
		cpu=CPU_ISSET(i,&set);
	printf("cpu=%i is %s\n",i,cpu?"set":"unset");
	}
		
	return 0;
}
