#include<stdio.h>
#include<unistd.h>
#include<signal.h>


void alarm_handle(int signum)
{
	printf("Five seconds passed!|n");
}

void func(void)
{
	signal(SIGALRM,alarm_handle);
	alarm(5);
	pause();
}
int main()
{
	func();
	return 0;
}
