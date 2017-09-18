#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>
#include<string.h>
#include<errno.h>

int find_file_in_dir(const char *path,const char *file)
{
	struct dirent *entry;
	int ret=1;
	DIR *dir;
	
	dir = opendir(path);
	errno=0;
	while((entry=readdir(dir)) != NULL){
		if(!strcmp(entry->d_name,file)){
			ret=0;
			break;
		}
	}
	if(errno&& !entry)
		perror("readdir");
	closedir(dir);
	return ret;
}

int main(int argc,char *argv[])
{
	int ret;
	if(argc<3){
		printf("usage: %s file is less",argv[0]);
		return -1;
	}
	ret=find_file_in_dir(argv[1],argv[2]);
	if(!ret)
		printf("the %s can find in the %s\n",argv[2],argv[1]);
	return 0;
}
