/*
 * =====================================================================================
 *
 *       Filename:  02.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月09日 23时39分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
struct student
{
	int num;
	char name[20];
	float score;
};
void main()
{
	int i,m;
	float maxscore;
	struct student stu[5]=
	{
	{101,"liming",89},
	{102,"zhanghong",95},
	{103,"lili",89},
	{104,"weichen",85},
	{105,"yangfan",75}
};
	m=0;
	maxscore=stu[0].score;
	for(i=1;i<5;i++)
	{
	if(stu[i].score>maxscore)
	{
	maxscore=stu[i].score;
	m=i;
	}
	}
	printf("the maxmum score is :%5.1f\n",maxscore);
	printf("the student number is :%d\n",stu[m].num);
	printf("the student name is :%s\n",stu[m].name);
}
