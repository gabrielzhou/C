#include<stdio.h>
void main()
  {
	char *strings[]={
		"clanguage",
		"basic",
		"world wide",
		"olympic",
		"great wall"
		};
	char **p,i;
	p=strings;
	for(i=0;i<5;i++)
		{
	printf("%s\n",*(p+i));
	}
	}
