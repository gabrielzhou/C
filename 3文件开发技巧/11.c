#include<stdio.h>
#include<cpio.h>
void main()
  {
	int handle;
	char filename[50];
	printf("please input the filename:\n");
	scanf("%s",filename);
	if((handle=creat(filename,0))==-1)
	  {
		printf("\nerror!cannot creat!\n");
	  }
	else
	  {
		printf("\nthis file has created!\n");
	  }
	close(handle);
  }
