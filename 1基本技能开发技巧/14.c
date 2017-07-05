#include<stdio.h>
char del(char s[],int pos, int len)
 {
	int i;
	for(i=pos+len-1; s[i]!='\0'; i++,pos++)
	s[pos-1]=s[i];
	s[pos-1]='\0';
	return s;
}
 void main()
    {
	char str[50];
	int position,length;
	printf("please input string:\n");
//	gets(str);
	fgets(str,50,stdin);
	printf("please input delete position:");
	scanf("%d",&position);
	printf("please input delete length:");
	scanf("%d",&length);
	del(str,position,length);
	printf("the final string:%s\n",str);
    }
