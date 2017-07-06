/*
 * =====================================================================================
 *
 *       Filename:  01.c
 *
 *    Description:  read the file from hardware
 *
 *        Version:  1.0
 *        Created:  2017年07月06日 21时01分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
void main()
 {
	FILE *fp;
	char ch,filename[50];
	printf("please input file's name:\n");
        //fgets(filename,50,stdin);
	gets(filename);
        fp=fopen(filename,"r");
	ch=fgetc(fp);
 	while(ch!=EOF)
	 {
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);

}	
	
