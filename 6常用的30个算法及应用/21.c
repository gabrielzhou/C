#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}quenode;
struct quefr
{
	quenode *front,*rear;
};
void creat(struct quefr *q)
{
	quenode *h;
	h=(quenode*)malloc(sizeof(quenode));
	h->next=NULL;
	q->front=h;
	q->rear=h;
}
void enqueue(struct quefr *q,int x)
{
	quenode *s;
	s=(quenode*)malloc(sizeof(quenode));
	s->data=x;
	s->next=NULL;
	q->rear->next=s;
	q->rear=s;
}
int dequeue(struct quefr *q)
{
	quenode *p;
	int x;
	p=(quenode*)malloc(sizeof(quenode));
	if(q->front == q->rear)
	{
	  printf("queue is NULL\n");
	}
	else
	{
	  p=q->front->next;
	  q->front->next=p->next;
	  if(p->next==NULL)
		q->rear=q->front;
	  x=p->data;
	  free(p);
	}
	return x;
}
void display(struct quefr dq)
{
	quenode *p;
	p=(quenode*)malloc(sizeof(quenode));
	p=dq.front->next;
	while(p!=NULL)
	 {
	  printf("data=%d\n",p->data);
	  p=p->next;
	 }
	printf("end \n");
}
void main()
{
	struct quefr *que;
	int n,i,x,sel;
	void display();
	void creat();
	void enqueue();
	int dequeue();
	do
	{
	  printf("\n");
	  printf("     1 create queue    \n");
	  printf("     2 into the queue  \n");
	  printf("     3 delete from queue    \n");
	  printf("     4 display         \n");
	  printf("     5 exit            \n");
	  printf("-----------------------\n");
	  printf("please choose(1,2,3,4,5) \n");
	  scanf("%d",&sel);
	  switch(sel)
	   {
		case 1:
		  que=(struct quefr*)malloc(sizeof(struct quefr));
		  creat(que);
		  printf("please input the number of element which you want to creat:");
		  scanf("%d",&n);
		  for(i=1;i<=n;i++)
		  {
			scanf("%d",&x);
			enqueue(que,x);
		  }
		  break;
		case 2:
		  printf("please input the element:");
		  scanf("%d",&x);
		  enqueue(que,x);
		  break;
		case 3:
		  printf("x=%d\n",dequeue(que));
		  break;
		case 4:
		 display(*que);
		 break;
		case 5:
		 exit(0);
		}
		} while(sel<=4);
}
