/*
 * =====================================================================================
 *
 *       Filename:  04.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月09日 23时51分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#define N 5
struct order
{
	int num;
	int con;
}a[20];
 void main()
{
	int i,j;
	for(i=0;i<N;i++)
	{
	scanf("%d",&a[i].num);
	}
	for(i=N-1;i>=1;i--)
	 for(j=i-1;j>=0;j--)
	  if(a[i].num<a[j].num)
		a[j].con++;
	  else
		a[i].con++;
	printf("the order is :\n");
	for(i=0;i<N;i++)
	  printf("%d\t%d\t\n",a[i].num,a[i].con);
}
