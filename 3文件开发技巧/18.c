#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
void main()
  {
	FILE *fp1,*fp2,*fp3;
	char file1[20],file2[20],file3[20],ch;
	int file_number;
	printf("please input file1:\n");
	scanf("%s",file1);
	if((fp1=fopen(file1,"rb"))!=NULL)
	 {
		ch=fgetc(fp1);
		while(ch!=EOF)
	    {
		putchar(ch);
		ch=fgetc(fp1);
	    }
	 }
	else
	 {
		printf("can not open!\n");
		exit(1);
	 }
	
	printf("please input file2:\n");
	scanf("%s",file2);
	if((fp2=fopen(file2,"rb"))!=NULL)
	 {
		ch=fgetc(fp2);
		while(ch!=EOF)
	    {
		putchar(ch);
		ch=fgetc(fp2);
	    }
	 }
	else
	 {
		printf("can not open!\n");
		exit(1);
	 }
	
	printf("please input file3:\n");
	scanf("%s",file3);
	if((fp3=fopen(file3,"rb"))!=NULL)
	 {
		ch=fgetc(fp3);
		while(ch!=EOF)
	    {
		putchar(ch);
		ch=fgetc(fp3);
	    }
	 }
	else
	 {
		printf("can not open!\n");
		exit(1);
	 }
	file_number=fcloseall();
	printf("%d files closed\n",file_number);
}	
