#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#define BUF_LEN 100

int main()
{
char cwd[BUF_LEN];
if(!getcwd (cwd,BUF_LEN)){
	perror("getcwd");
	exit(EXIT_FAILURE);
	}
printf("cwd=%s\n",cwd);
return 0;
}
