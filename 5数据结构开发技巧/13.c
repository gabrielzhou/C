/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月10日 23时05分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct DataType
{
	struct	DataType *base;
	struct	DataType *top;
	int stacksize;
}SeqStack;
void Initial(SeqStack *s)
{
	s->base=(struct DataType *)malloc(sizeof(struct DataType));
	if(!s->base)
	  exit(-1);
	s->top=s->base;
	s->stacksize=stacksize;
	}
int IsEmpty(SeqStack *s)
{
	return s->top=s->base;
}
int IsFull(SeqStack *s)
{
	return s->top - s->base==stacksize-1;
}
void Push(SeqStack *S,DataType x)
{
	
	if(IsEmpty(S))
	{
	printf("栈上溢\n");
	exit(1);
	}
	*S->top++ =x;
}
SeqStack Pop(SeqStack *S)
{
	if(IsEmpty(S))
	{
	printf("栈为空\n");
	exit(1);
	}
	return *(--S->top);
}
SeqStack Top(SeqStack *S)
{
	if(IsEmpty(S))
	 {
	   printf("栈为空\n");
	   exit(1);
	 }
	return *(S->top-1);
}
void conversion(int N,int B)
{
	int i;
	SeqStack *S;
	Initial(S);
	while(N)
	 {
	  Push(S,N%B);
	  N=N/B;
	 }
	while(!IsEmpty(S))
	 {
	  i=Pop(S);
	  printf("%d\n",i);
	}
}
void main()
{
	int n,d;
	printf("input the integer you want to transform:\n");
	scanf("%d",&n);
	printf("input the integer of the system:\n");
	scanf("%d",&d);
	printf("result:\n");
	conversion(n,d);
}
