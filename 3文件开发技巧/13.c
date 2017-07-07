#include<stdio.h>
#include<stdlib.h>
void main()
 {
	FILE *fp;
	char filename1[20],filename2[20];
	printf("please input the file name which do you want to change:\n");
	scanf("%s",filename1);
	if((fp=fopen(filename1,"r"))!=NULL)
	 {
	   printf("%s open successfully\n",filename1);
	   printf("please input new name!\n");
	   scanf("%s",filename2);
	   rename(filename1,filename2);
	   fclose(fp);
	 }
	else
	 {
	  printf("cannot find!!!!\n");
	  exit(0);
	 }
  }
