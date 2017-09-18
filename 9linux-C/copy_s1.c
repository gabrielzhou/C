#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
	char c,list[100];
	int in,out;
	char *file_1,*file_2;
	printf("argv[1] is %s\n",argv[1]);
	printf("argv[2] is %s\n",argv[2]);
	in = open(argv[1],O_RDONLY);
	if(in==-1)
		printf("%s can not open\n",file_1);
	out = open(argv[2],O_WRONLY|O_CREAT,S_IRWXU|S_IRGRP|S_IROTH);
	if(out==-1)
		printf("%s can not open\n",file_2);
	while(read(in,&c,1) == 1)
	{
	   printf("%c",c);
	    write(out,&c,1);
	}
	close(in);
	close(out);
	out=open(argv[2],O_RDONLY);
	if(out==-1)
	    printf("argv[2] is %s\n",argv[2]);
	lseek(out,10,SEEK_SET);
	if(read(out,&c,1) ==-1)
		printf("can not read the out file");
	printf("out is %c\n",c);
	close(out);
	out=open(argv[2],O_RDWR);
	if(out==-1)
	   printf("argv[2] is %s\n",argv[2]);
	if(pread(out,list,100,20)==-1)
		printf("can not read the out file\n");
	printf("the list is %s",list);
	if(pwrite(out,c,1,300000)==-1)
		printf("can not write the out file\n");
	close(out);
}
