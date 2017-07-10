/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月10日 22时29分31秒
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
typedef struct student
{
	int num;
	struct student *next;
} LNode,*Linklist;
struct student *create(int n)
{
	int i;
	Linklist head,p1,p2;
	int a;
	head=NULL;
	printf("the record:\n");
	for(i=n;i>0;--i)
	 {
	  p1=(struct student*)malloc(sizeof(struct student));
	  scanf("%d",&a);
	  p1->num=a;
	  if(head=NULL)
	  {
	    head=p1;
	    p2=p1;
	  }
	 else
	 {
	  p2->next=p1;
	  p2=p1;
	 }
	 }
	p2->next=NULL;
	return head;
}

Linklist delnode(struct student *head,int i)
{
	int j=0;
	Linklist p,r;
	p=head;
	while(p&&j<i-1)
	 {
		p=p->next;
		++j;
	 }
	if(!p->next||j>i-1)
	   exit(1);
	r=p->next;
	p->next=r->next;
	free(r);
}
void main()
{
	int n,i;
	struct student *q;
	printf("input the count of the nodes you want creat:\n");
	scanf("%d",&n);
	q=create(n);
	i=2;
	delnode(q,i);
	printf("the third record is deleted!\nthe resulte is;\n");
	while(q)
	 {
	   printf("%d ",q->num);
	   q=q->next;
	 }
}

