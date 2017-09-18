#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<grp.h>
#include<fcntl.h>

int make_root_ower(int fd)
{
	int ret;
	ret=fchown(fd,0,0);
	if(ret){
		perror("fchown");
		return 1;
	}
	return ret;
}
int main(int argc,char *argv[])
{
struct group *gr;
int ret,fd1;

gr=getgrnam("mysql");
if(!gr){
	perror("getgrnam");
	return 1;
}
ret = chown("manifest.txt",-1,gr->gr_gid);
if(ret)
	perror("chown");

fd1=open(argv[1],O_RDWR);
make_root_ower(fd1);
	return 0;
}
