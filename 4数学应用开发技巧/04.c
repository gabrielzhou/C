/*
 * =====================================================================================
 *
 *       Filename:  04.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月07日 22时17分08秒
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
  int i,j;
  int hun,ten,data;
  printf("the result is:\n");
  for(i=100;i<=999;i++)
   {
	j=10;
	while(j*j<=i)
	 {
	   if(i==j*j)
	     {
		hun=i/100;
		ten=i%100/10;
		data=i%10;
		if(hun==ten||hun==data||ten==data)
		  printf("%5d ",i);
	      }
	j++;
	  }
    }
  }
