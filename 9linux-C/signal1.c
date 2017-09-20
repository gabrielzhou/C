#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

static void SIGINT_handler(int signo)
{
	printf("Caught SIGINT\n");
	exit(EXIT_SUCCESS);
}

int main(void)
{
	if(signal(SIGINT,SIGINT_handler) == SIG_ERR){
		fprintf(stderr,"cannot handle SIGINT!\n");
		exit(EXIT_FAILURE);
	}
	for(;;)
		pause();
	return 0;
}
