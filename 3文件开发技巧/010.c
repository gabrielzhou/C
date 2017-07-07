#include<stdio.h>
#include<stdlib.h>
void main()
  {
	FILE *fp1,*fp2;
	char filename1[50],filename2[50],ch;
	long character,space,other,digit;
	character=space=digit=other=0;
	printf("enter file name\n");
	scanf("%s",filename1);
	if((fp1=fopen(filename1,"r"))==NULL)
	 {
		printf("cannot open file\n");
		exit(1);
	 }
	printf("enter file name for write data:\n");
	scanf("%s",filename2);
	if((fp2=fopen(filename2,"w"))==NULL)
	 {
		printf("cannot open file\n");
		exit(1);
	 }
	while((ch=fgetc(fp1))!=EOF)
	 {
		if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
		  character++;
		else if(ch==' ')
		  space++;
		else if(ch>='0'&&ch<='9')
		  digit++;
		else
		  other++;
	 }
	 fclose(fp1);
	 fprintf(fp2,"character:%ld space:%ld digit:%ld other:%ld\n",character,space,digit,other);
	 fclose(fp2);
	}
