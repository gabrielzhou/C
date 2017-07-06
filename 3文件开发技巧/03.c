/*
 * =====================================================================================
 *
 *       Filename:  03.c
 *
 *    Description:  format file
 *
 *        Version:  1.0
 *        Created:  2017年07月06日 22时33分00秒
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
	int i,flag=1;
	char str[80],filename[50];
	FILE *fp;
	printf("please input the filename:\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
	   printf("cannot open!\n");
	   exit(0);
	}
    while(flag==1)
	{
	  printf("\ninput string:\n");
	  scanf("%s",str);
	  fprintf(fp,"%s",str);
	  printf("continue:?\n");
	  if((getchar()=='N')||(getchar()=='n'))
              flag=0;
         }
        fclose(fp);
	fp=fopen(filename,"r");
	while(fscanf(fp,"%s",str)!=EOF)
	  {
		for(i=0;str[i]!='\0';i++)
			if((str[i]>='a')&&(str[i]<='z'))
				str[i]-=32;
		printf("%s\n",str);
	}
	fclose(fp);
}
