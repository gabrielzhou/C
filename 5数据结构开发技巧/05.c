#include<stdio.h>
#include<string.h>
#define MAX 10
struct aa
{
	char name[15];
	char tel[15];
};
int readin(struct aa *a)
{
	int i=0,n=0;
	while(1)
	{
	 scanf("%s",a[i].name);
	 if(!strcmp(a[i].name,"#"))
	  break;
	 scanf("%s",a[i].tel);
	 i++;
	 n++;
	}
 return n;
}
void search(struct aa *b,char *x,int n)
{
	int i;
	i=0;
	while(1)
	{
	if(!strcmp(b[i].name,x))
	{
	printf("name:%s tel:%s\n",b[i].name,b[i].tel);
	break;
	}
	else
	i++;
	 n--;
	if(n==0)
	{
	printf("no found!\n");
	break;
	}
	}
}
void main()
{
	struct aa s[MAX];
	int num;
	char name[15];
	num=readin(s);
	printf("please input the name:\n");
	scanf("%s",name);
	search(s,name,num);
}
