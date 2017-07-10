#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct student
{
	int num;
	struct student *next;
};
struct student *create(int n)
{
	int i;
	struct student *head,*p1,*p2;
	int a;
	head=NULL;
	printf("the record:\n");
	for(i=n;i>0;--i)
	 {
	  p1=(struct student*)malloc(sizeof(struct student));
	  scanf("%d",&a);
	  p1->num=a;
	  if(head==NULL)
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
struct student *insertnode(struct student *head,char x,int i)
{
	int j=0;
	struct student *p,*s;
	p=head;
	while(p&&j<i-1)
	 {
	  p=p->next;
	  ++j;
	 }
	if(!p||j>i-1)
	  exit(1);
	s=(struct student*)malloc(sizeof(struct student));
	s->num=x;
	s->next=p->next;
	p->next=s;
}
void main()
{
	int n,i;
	int x;
	struct student *q;
	printf("input the count of the nodes you want to creat:\n");
	scanf("%d",&n);
	q=create(n);
	i=2;
	x=123;
	insertnode(q,x,i);
	printf("the result is:\n");
	while(q)
	{
	 printf("%d ",q->num);
	 q=q->next;
	}
}
