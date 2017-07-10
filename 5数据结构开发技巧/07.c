#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node
{
	char name[20];
	struct node *prior,*next;
}stud;
stud *create(int n)
{
	stud *p,*h,*s;
	int i;
	h=(stud*)malloc(sizeof(stud));
	h->name[0]='\0';
	h->prior=NULL;
	h->next=NULL;
	p=h;
	for(i=0;i<n;i++)
	 {
		s=(stud*)malloc(sizeof(stud));
		p->next=s;
		printf("input the %d student's name:\n",i+1);
		scanf("%s",s->name);
		s->prior=p;
		s->next=NULL;
		p=s;
	 }
	p->next=NULL;
	return (h);
}
stud *search(stud *h,char *x)
{
	stud *p;
	char *y;
	p=h->next;
	while(p)
	 {
		y=p->name;
		if(strcmp(y,x)==0)
		 return(p);
		else
		 p=p->next;
	 }
	printf("cannot find data!\n");
}
void del(stud *p)
{
	p->next->prior=p->prior;
	p->prior->next=p->next;
	free(p);
}
void main()
{
	int number;
	char sname[20];
	stud *head,*sp;
	puts("please input the size of the list:");
	scanf("%d",&number);
	head=create(number);
	sp=head->next;
	printf("now the double list is:\n");
	while(sp)
	 {
		printf("%s\n",&*(sp->name));
		sp=sp->next;
	 }
	printf("please input the name which you want to find:\n");
	scanf("%s",sname);
	sp=search(head,sname);
	printf("the name you want to find is: %s\n", *&sp->name);
	del(sp);
	sp=head->next;
	printf("now the double lsit is:\n");
	while(sp)
	 {
		printf("%s ",&*(sp->name));
		sp=sp->next;
	 }
	printf("\n");
}
	
