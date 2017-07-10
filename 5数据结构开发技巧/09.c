#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define Listsize 100
struct sqlist
{
	int data[Listsize];
	int length;
};
void InsertList(struct sqlist *l,int t,int i)
{
	int j;
	if(i<0||i>l->length)
	 {
	  printf("position error\n");
	  exit(1);
	 }
	if(l->length>=Listsize)
	 {
	  printf("overflow\n");
	  exit(1);
	 }
	for(j=l->length-1;j>=i;j--)
	 l->data[j+1]=l->data[j];
	l->data[i]=t;
	l->length++;
}
void main()
{
	struct sqlist *sq;
	int i,n,t;
	sq=(struct sqlist*)malloc(sizeof(struct sqlist));
	sq->length=0;
	printf("please input the size of the list:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 {
	  scanf("%d",&t);
	  InsertList(sq,t,i);
	 }
	printf("now the list is:\n");
	for(i=0;i<sq->length;i++)
	 {
	  printf("%d ",sq->data[i]);
	 }
}
