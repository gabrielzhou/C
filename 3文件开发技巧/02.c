/*
 * =====================================================================================
 *
 *       Filename:  02.c
 *
 *    Description:  write the file.
 *
 *        Version:  1.0
 *        Created:  2017年07月06日 22时20分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdlib.h>
#include<stdio.h>
void main()
{
   FILE *fp;
   char ch,filename[50];
   printf("please input filename:\n");
   scanf("%s",filename);
   if((fp=fopen(filename,"w"))==NULL)
	{
	  printf("cannot open file\n");
	  exit(0);
	}
    ch=getchar();
    while(ch!='#')
     {
	fputc(ch,fp);
        ch=getchar();
     }
   fclose(fp);
 }
