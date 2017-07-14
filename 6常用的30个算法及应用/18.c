#include<stdio.h>
#include<malloc.h>
#define N 10
typedef struct node
{
	char name[20];
	struct node *prior,*next;
}stud;
stud *creat(int n)
{
	stud *p,*h,*s;
	int i;
	h=(stud*)malloc(sizeof(stud));
	h->name[0]='\0';
	h->prior=NULL;
	h->next=NULL;
	p=h;
	printf("input the records:\n");
	for(i=0;i<n;i++)
	{
	s=(stud*)malloc(sizeof(stud));
	p->next=s;
	scanf("%s",s->name);
	s->prior=p;
	s->next=NULL;
	p=s;
	}
	p->next=NULL;
	return (h);
}
stud *gettp(stud *head)
{
	stud *p,*r;
	while(p->next !=NULL)
	  {
		p=p->next;
	  }
	return p;
}
void main()
{
	int n,i;
	int x;
	stud *q;
	printf("input the count of the nodes you want to creat:\n");
	scanf("%d",&n);
	q=creat(n);
	q=gettp(q);
	printf("the result:\n");
	while(q)
	{
	  printf("    %s\n",& *(q->name));
	  q=q->prior;
	}
}
