/*
 * =====================================================================================
 *
 *       Filename:  04.c
 *
 *    Description:  read and write file for block
 *
 *        Version:  1.0
 *        Created:  2017年07月06日 22时46分40秒
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
struct student_score
 {
    char name[20];
    int num;
    int china;
    int math;
    int english;
    } score[100];
void save(char *name,int n)
 {
   FILE *fp;
   int i;
   if((fp=fopen(name,"wb"))==NULL)
     {
	printf("cannot open file\n");
        exit(0);
      }
    for(i=0;i<n;i++)
       if(fwrite(&score[i],sizeof(struct student_score),1,fp)!=1)
	printf("file write error\n");
    fclose(fp);
}
void show(char *name,int n)
{
   int i;
   FILE *fp;
   if((fp=fopen(name,"rb"))==NULL)
	{
	  printf("cannot open file\n");
	 exit(0);
	}
	for(i=0;i<n;i++)
	{
	fread(&score[i],sizeof(struct student_score),1,fp);
	printf("%-10s%4d%4d%4d%4d\n",score[i].name,score[i].num,score[i].china,score[i].math,score[i].english);
      }
	fclose(fp);
}
void main()
  {
	int i,n;
	char filename[50];
	printf("input the filename:\n");
	scanf("%s",filename);
	printf("how many students in you class?\n");
	scanf("%d",&n);
	printf("please input nam,mumber,china,math,english:\n");
	for(i=0;i<n;i++)
	{
	  printf("NO%d\n",i+1);
	  scanf("%s%d%d%d%d",score[i].name,&score[i].num,&score[i].china,&score[i].math,&score[i].english);
	save(filename,n);
	}
	show(filename,n);
}
