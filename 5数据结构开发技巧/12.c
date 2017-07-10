/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年07月10日 22时52分38秒
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
} LNode,*LinkList;
LinkList create(void)
{
	LinkList head;
	LinkList p1,p2;
	char a;
	head=NULL;
	a=getchar();
	while(a!='\n')
	 {
	  p1=(LNode *)malloc(sizeof(LNode));
	  p1->num=a;
	  if(head==NULL)
		head=p1;
	  else
	   p2->next=p1;
	  p2=p1;
	  a=getchar();
	}
	p2->next=NULL;
	return head;
}
LinkList coalition(LinkList L1,LinkList L2)
{
	LinkList temp;
	if(L1=NULL)
	  return L2;
	else
	{
	 if(L2!=NULL)
	  {
	   for(temp=L1;temp->next !=NULL;temp=temp->next);
	   temp->next=L2;
	  }
	}
	return L1;
}
void main()
{
	LinkList L1,L2,L3;
	printf("please input two linklist:\n");
	printf("the first linklist:\n");
	L1=create();
	printf("the second linklist:\n");
	L2=create();
	coalition(L1,L2);
	printf("the resultant linklist is:\n");
	while(L1)
	 {
	  printf("%c",L1->num);
	  L1=L1->next;
	  }
}
