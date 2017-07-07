#include<stdio.h>
#include<dirent.h>
void main()
 {
	char *ptr,filename[50];
	printf("please input the file name you want to search:\n");
	scanf("%s",filename);
	if((ptr=searchpath(filename))!=NULL)
	   printf("the path is :%s:%s\n",ptr);
	else
	   printf("annot find\n");
  }
