/*
 * =====================================================================================
 *
 *       Filename:  09.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月07日 22时54分58秒
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
	int i,a,b;
	for(i=1000;i<10000;i++)
	  {
	 a=i/100;
	 b=i%100;
	 if((a+b)*(a+b)==i)
	    printf("%5d\n",i);
	  }
 }
