#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int argc,char *argv[])
{
	struct stat stat1;
	stat(argv[1],&stat1);
	printf("the dev is %d\n",stat1.st_dev);
	printf("the dev is %d\n",stat1.st_ino);
	printf("the dev is %d\n",stat1.st_mode);
	printf("the dev is %d\n",stat1.st_nlink);
	printf("the dev is %d\n",stat1.st_blksize);
	printf("the dev is %d\n",stat1.st_blocks);
	printf("the dev is %d\n",stat1.st_uid);
	return 0;
}
