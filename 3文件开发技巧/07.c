/*
 * =====================================================================================
 *
 *       Filename:  07.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月07日 00时43分31秒
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
void main()
 {
   char ch,filename1[50],filename2[50];
   FILE *fp1,*fp2;
   printf("please input filename1:\n");
   scanf("%s",filename1);
   if((fp1=fopen(filename1,"a+"))==NULL)
	{
	printf("cannot open\n");
	exit(0);
	}
    printf("file1:\n");
    ch=fgetc(fp1);
    while(ch!=EOF)
	{
	putchar(ch);
	ch=fgetc(fp1);
	}
   printf("please input filename2:\n");
   scanf("%s",filename2);
   if((fp1=fopen(filename2,"r"))==NULL)
	{
	printf("cannot open\n");
	exit(0);
	}
    printf("file2:\n");
    ch=fgetc(fp2);
    while(ch!=EOF)
	{
	putchar(ch);
	ch=fgetc(fp2);
	}
   fseek(fp2,0L,0);
   ch=fgetc(fp2);
   while(!feof(fp2))
	{
	fputc(ch,fp1);
	ch=fgetc(fp2);
	}
	fclose(fp1);
	fclose(fp2);
}


