#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  FILE *in, *out;
  char filename[50],ch,cfilename[50];
  void space()
   {
     char ext[6][6]=
	{
	  "a.txt","b.txt","c.txt","d.txt","e.txt","f.txt"
	};
    unsigned long int n=1,k,byte=0;
    unsigned int j=0,i=0;
    printf("please input filename:\n");
    scanf("%s",filename);
    strcpy(cfilename,filename);
    if((in=fopen(filename,"r"))==NULL)
	{
	  printf("cannot open file\n");
	  exit(0);
	}
    printf("please input file size after space(kb):\n");
    scanf("%d",&n);
    n=n*1024;
    while(filename[j]!='.')
	j++;
    filename[j]='\0';
    if((out=fopen(strcat(filename,ext[i]),"w"))==NULL)
	{
	printf("cannot open file\n");
	exit(0);
	}
     fseek(in,0,2);
     k=fte11(in);
     fseek(in,0,0);
     while(k>0)
	{
	ch=fgetc(in);
	fputc(ch,out);
	byte++;
	k--;
	if(byte==n)
	  {
		fclose(out);
		byte=0;
		strcpy(filename,cfilename);
		while(filename[j]!='.')
		 j++;
		filename[j]='\0';
		i++;
		if((out=fopen(strcat(filename,ext[i]),"w"))==NULL)
		  {
			printf("cannot open file\n");
			exit(0);
		  }
              }
		}
		fclose(in);
		printf("file succed space!\n\n\n");
	}
