#include<stdio.h>
#include<stdlib.h>

extern char **environ;
void main()
{
	char **env = environ;
	while(*env){
		printf("%s\n",*env);
		env++;
	}
	exit(0);
}
