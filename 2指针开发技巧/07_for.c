#include<stdio.h>
copy(char *s,char *q)
  {
	int i=0;
	for(;*s!='\0';)
	{
	*q=*s;
	s++;
	q++;
	}
	*q='\0';
  }
void main()
  {
	char *str,*p;
	str="hello world!";
	copy(str,p);
	printf("%s\n",p);
  }
