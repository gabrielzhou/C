#include<stdlib.h>
#include<stdio.h>

int main()
{
	int *x,*y;
	x=malloc(50*sizeof(int));
	if(!x){
		perror("malloc");
		return -1;
	}
	y=calloc(50,sizeof(int));
	if(!y){
		perror("calloc");
		return -1;
	}
	free(x);
	free(y);
	return 0;
}
