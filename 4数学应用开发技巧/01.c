/*
 * =====================================================================================
 *
 *       Filename:  01.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月07日 21时08分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,n=0;
	for(i=100;i<=200;i++)
	  for(j=2;j<=sqrt(i);j++)
		if(i%j==0)
		  break;
		else if(j>sqrt(i)-1)
			{
			  printf("%d ",i);
			  n++;
			  if(n%5==0)
				printf("\n");
			}
	}
