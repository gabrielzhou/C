/*
 * =====================================================================================
 *
 *       Filename:  05.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月07日 22时22分51秒
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
	int i,j,sum=0;
	for(i=1;i<1000;i++)
	  {
	     sum=0;
	     for(j=1;j<i;j++)
		if(i%j==0)
		 sum+=j;
	     if(sum==i)
		  printf("%4d ",i);
 	  }
   }
