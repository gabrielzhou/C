#include<stdio.h>
void main()
 {
	FILE *temp;
	char c;
	if((temp=tmpfile())!=NULL)
	 {
	  fputs("hello world\nhello mingri\n",temp);
	 }
	rewind(temp);
	while((c=fgetc(temp))!=EOF)
	  printf("%c",c);
	fclose(temp);
 }
