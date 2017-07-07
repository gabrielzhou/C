#include<stdio.h>
#include<stdlib.h>
void error(int e)
 {
	if(e==0)
	  printf("input error\n");
	else
	  printf("output error\n");
	exit(1);
  }
void main()
{
	FILE *in,*out;
	int tab,i;
	char ch,filename1[30],filename2[30];
	printf("please input the filename1:\n");
	scanf("%s",filename1);
	printf("please input the filename2:\n");
	scanf("%s",filename2);
	if((in=fopen(filename1,"rb"))==NULL)
	  {
		printf("can not open the file %s.\n",filename1);
		exit(1);
	  }
	if((out=fopen(filename2,"wb"))==NULL)
	  {
		printf("can not open the file %s.\n",filename2);
		exit(1);
	  }
	tab=0;
	ch=fgetc(in);
	while(!feof(in))
	 {
		if(ferror(in))
		  error(0);
		if(ch=='\t')
	 {
	   for(i=tab;i<8;i++)
	     {
		putc(' ',out);
		if(ferror(out))
		  error(1);
	     }
	 tab=0;
	}
	  else
	{
	putc(ch,out);
	if(ferror(out))
		error(1);
	tab++;
	if(tab==8)
	   tab==0;
	if(ch=='\n'||ch=='\r')
	    tab=0;
	}
	ch=fgetc(in);
	}
	fclose(in);
	fclose(out);
  }
