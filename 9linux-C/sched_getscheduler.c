#include<stdio.h>
#include<sched.h>

int main(int argc,char *argv[])
{
	int policy,process_pid;
	process_pid= (int)*argv[1];	
	policy=sched_getscheduler(*argv[1]);
	switch(policy){
	case SCHED_OTHER:
		printf("Policy is normal\n");
		break;
	case SCHED_RR:
		printf("Policy is round-robin\n");
		break;
	case SCHED_FIFO:
		printf("Policy is first-in,first-out\n");
		break;
	case -1:
		perror("sched_getscheduler");
		break;
	default:
		fprintf(stderr,"unknown policy!\n");
		break;
		}
	struct sched_param sp={ .sched_priority =1};
	int ret;
	ret =sched_setscheduler(0,SCHED_RR,&sp);
	if(ret==-1){
		perror("sched_setscheduler");
		return 1;
	}
	policy=sched_getscheduler(0);
	switch(policy){
	case SCHED_OTHER:
		printf("Policy is normal\n");
		break;
	case SCHED_RR:
		printf("Policy is round-robin\n");
		break;
	case SCHED_FIFO:
		printf("Policy is first-in,first-out\n");
		break;
	case -1:
		perror("sched_getscheduler");
		break;
	default:
		fprintf(stderr,"unknown policy!\n");
		break;
		}
	
}		
