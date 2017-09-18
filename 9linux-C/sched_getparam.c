#include<stdio.h>
#include<sched.h>
int main()
{
struct sched_param sp,sp1;
int ret;
ret=sched_getparam(0,&sp);
if(ret==-1){
	perror("sched_getparam");
	return 1;
}
printf("our priority is %d\n",sp.sched_priority);
sp1.sched_priority=1;
ret=sched_setparam(0,&sp1);
if(ret==-1){
	perror("sched_setparam");
	return 1;
}
ret=sched_getparam(0,&sp);
if(ret==-1){
	perror("sched_getparam");
	return 1;
}
printf("our priority is %d\n",sp.sched_priority);
}
