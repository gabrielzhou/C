#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char insert(char *s,char *q,int n)
  {
	char *str,strcp[50];
	str=strcp;
	int i;
	for(i=0;*s!='\0';i++)
	  {
		if(i==n-1)
		{
		while(q!='\0')
		{
		str[i]=*q;
		q++;
		i++;
		}
		}
		str[i]=*s;
		s++;
	}
	str[i+1]='\0';
	return str;
  }
void main()
  {
	char *strin,*str,*str1;
	int i;
//	str=malloc(sizeof(char)*50);
	str="hello,world!";
	strin="big";
	printf("please input the position you want to insert:");
	scanf("%d",&i);
	str1=insert(str,strin,i);
	printf("%s\n",str1);
 //       free(str);
  }
