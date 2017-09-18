#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#define BUF_LEN 100

int main()
{
char *cwd;
cwd=get_current_dir_name();
if(!cwd){
	perror("get_current_dir_name");
	exit(EXIT_FAILURE);
	}
printf("cwd=%s\n",cwd);
free(cwd);
return 0;
}
