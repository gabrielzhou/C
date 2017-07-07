/*
 * =====================================================================================
 *
 *       Filename:  06.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月07日 22时28分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int judge(long n)
 {
    int i,len,half;
    char a[20];
 //   ltoa(n,a,10);
    snprintf(a,10,"%d",n);
    len=strlen(a);
    half=len/2;
    for(i=0;i<half;i++)
	if(a[i]!=a[--len])
	 break;
     if(i>half)
	return 1;
      else
	return 0;
   }
void main()
 {
	long n;
	printf("the result is:\n");
	for(n=11;n<1000;n++)
	   if(judge(n)&&judge(n*n)&&judge(n*n*n))
		printf("n=%ld\tn*n=%ld\tn*n*n=%ld\n",n,n*n,n*n*n);
 }
