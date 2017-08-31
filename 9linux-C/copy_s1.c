#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	char c;
	int in,out;
	char *file_1,*file_2;
	printf("argv[1] is %s\n",argv[1]);
	printf("argv[2] is %s\n",argv[2]);
	in = open(argv[1],O_RDONLY);
	if(in==-1)
		printf("%s can not open\n",file_1);
	out = open(argv[2],O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
	if(out==-1)
		printf("%s can not open\n",file_2);
	while(read(in,&c,1) == 1)
	{
	   printf("%c",c);
	    write(out,&c,1);
	}
}
