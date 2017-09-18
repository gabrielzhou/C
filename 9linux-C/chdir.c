#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
char *swd;
int ret;

swd=getcwd(NULL,0);
if(!swd){
	perror("getcwd");
	exit(EXIT_FAILURE);
	}
	ret=chdir(argv[1]);
	if(ret==-1){
	perror("chdir");
	exit(EXIT_FAILURE);
	}
	pid_t pid;
	pid=fork();
	if(pid==-1)
		perror("fork");
	if(!pid){
		int ret;
		ret=execv("/bin/ls","-l");
		if(ret==-1){
			perror("execv");
			exit(EXIT_FAILURE);
		}
	}

	ret=chdir(swd);
	if(ret){
		perror("chdir");
		exit(EXIT_FAILURE);
	}
	free(swd);
	return 0;
}
