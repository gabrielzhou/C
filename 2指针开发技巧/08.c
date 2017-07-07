#include<stdio.h>
#include<stdlib.h>
void connect(char *s,char *t,char *q)
	{
	  int i=0;
	  while(*s!='\0')
	{
	*q=*s;
	s++;
	q++;
	}
        *q=' ';
	q++;
          while(*t!='\0')
	{
	*q=*t;
	t++;
	q++;
        }
        *q='\0';
        }
 void main()
  {
	char *str,*t,*p;
	str="one world";
	t= "one dream";
	p = (char *) malloc(sizeof(char)*20);
	printf("the first string is:%s\n",str);
	printf("the second string is:%s\n",t);
	connect(str,t,p);
	printf("the connected string is:\n");
	printf("%s\n",p);
        free(p);
  }
