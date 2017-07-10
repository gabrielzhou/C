/*
 * =====================================================================================
 *
 *       Filename:  01.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月09日 23时33分09秒
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
	char sex;
	int age;
	float score;
};
void main()
{
	struct student student1={1001,"liming",'M',20,93.5};
	printf("the information of the student is:\n");
	printf("number:%d\nname:%s\nsex:%c\nage:%d\nscore:%5.1f\n",student1.num,student1.name,student1.sex,student1.age,student1.score);
}
