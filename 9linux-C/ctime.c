#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	time_t timeval;
	
	(void)time(&timeval);
	printf("The date is: %s\n", ctime(&timeval));
	char *buf;
	ctime_r(&timeval,buf);
	printf("The date is:%s",buf);
	exit(0);
}
