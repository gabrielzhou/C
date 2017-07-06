/*
 * =====================================================================================
 *
 *       Filename:  06.c
 *
 *    Description:  copy the file to other one.
 *
 *        Version:  1.0
 *        Created:  2017年07月07日 00时28分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
int main()
  {
	FILE *in,*out;
	char ch,infile[50],outfile[50];
	printf("enter the infile name;\n");
	gets(infile);
	//scanf("%s",infile);
	printf("enter the outfile name:\n");
	//scanf("%s",outfile);
	gets(outfile);
	if ((in=fopen(infile,"r"))==NULL)
	{
		printf("cannot open infile\n");
		exit(0);
	}
	if ((in=fopen(outfile,"w"))==NULL)
	{
		printf("cannot open outfile\n");
		exit(0);
	}
	ch=fgetc(in);
	while(ch!=EOF)
	{
	fputc(ch,out);
	ch=fgetc(in);
	}
	fclose(in);
	fclose(out);
	return 0;
}	
