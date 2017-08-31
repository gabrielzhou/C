#include<stdio.h>
#include<stdlib.h>
void main()
{
	if((write(1,"Here is some data\n",18)) !=18)
		write(2," Awrite error has occurred on file descriptor 1\n",46);
	exit(0);
}
