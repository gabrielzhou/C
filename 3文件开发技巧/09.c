#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void encrypt(char *s_file,char *pwd,char *c_file)
  {
	int i=0;
	FILE *fp1,*fp2;
	register char ch;
	fp1=fopen(s_file,"rb");
	if(fp1==NULL)
	  {
		printf("cannot open s_file.\n");
		exit(1);
	  }

	fp2=fopen(c_file,"wb");
	if(fp2==NULL)
	  {
		printf("cannot open or create c_file.\n");
		exit(1);
	  }
	ch=fgetc(fp1);
	while(!feof(fp1))
	  {
		ch=ch^*(pwd+i);
		i++;
		fputc(ch,fp2);
		ch=fgetc(fp1);
		if(i>9)
		 i=0;
	  }
	fclose(fp1);
	fclose(fp2);
	}

void main(int argc, char *argv[])
  {
	char sourcefile[50],codefile[50];
	char pwd[10];
	if(argc !=4)
	 {
		printf("please input encode file name:\n");
		gets(sourcefile);
		printf("please input password\n");
		gets(pwd);
		printf("please input saved file name:\n");
		gets(codefile);
		encrypt(sourcefile,pwd,codefile);
	}
	else
	  {
		strcpy(sourcefile,argv[1]);
		strcpy(pwd,argv[2]);
		strcpy(codefile,argv[3]);
		encrypt(sourcefile,pwd,codefile);
	  }
  } 
