/*
 * =====================================================================================
 *
 *       Filename:  03.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月09日 23时47分24秒
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
	struct student_score
	{
	int mid;
	int end;
	int ave;
	} score;
	printf("please input score(midterm and end of term:\n");
	scanf("%d%d",&score.mid,&score.end);
	score.ave=(score.mid+score.end)/2;
	printf("average=%d\n",score.ave);
}
