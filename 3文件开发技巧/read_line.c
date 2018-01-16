/*
 * =====================================================================================
 *
 *       Filename:  read_line.c
 *
 *    Description:  read a line from file
 *
 *        Version:  1.0
 *        Created:  2018年01月15日 20时46分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>


int main(int argc,char *argv[]){

FILE *fp;
char ch_line[1024];
	if((fp=fopen(argv[1],"r+"))==NULL)
    {
	printf("the file can not open\n");
	return -1;
    }
	while(fgets(ch_line,1024,fp)!=NULL)
    {
	printf("都一行打印一行%s",ch_line);
    }
	fclose(fp);
}
