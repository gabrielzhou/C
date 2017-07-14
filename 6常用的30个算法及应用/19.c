#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node
{
	struct node *lchild;
	char data;
	struct node *rchild;
} bitnode, *bitree;
bitree CreatTree()
{
	char a;
	bitree new;
	scanf("%c",&a);
	if(a=='#')
	  return NULL;
	else
	{
	new=(bitree)malloc(sizeof(bitnode));
	new->data=a;
	new->lchild=CreatTree();
	new->rchild=CreatTree();
	}
	return new;
}
void preordeTraverse(bitree bt)
{
  if(bt!=NULL)
	{
	printf("%c",bt->data);
	preordeTraverse(bt->lchild);
	preordeTraverse(bt->rchild);
	}
}
void InorderTraverse(bitree bt)
{
  if(bt!=NULL)
	{
	InorderTraverse(bt->lchild);
	printf("%c",bt->data);
	InorderTraverse(bt->rchild);
	}
}
void PostorderTraverse(bitree bt)
{
  if(bt!=NULL)
	{
	PostorderTraverse(bt->lchild);
	PostorderTraverse(bt->rchild);
	printf("%c",bt->data);
	}
}
void main()
{
	bitree root;
	root=CreatTree();
	printf("preorder traversal:\n");
	preordeTraverse(root);
	printf("\n");
	printf("inorder traversal: \n");
	InorderTraverse(root);
	printf("\n");
	printf("postorder traversal: \n");
	PostorderTraverse(root);
	printf("\n");
}
