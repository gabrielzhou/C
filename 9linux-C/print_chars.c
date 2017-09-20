#include<stdio.h>
#include<stdlib.h>

void print_chars(int n,char c)
{
	int i;
	for(i=0;i<n;i++){
		char *s;
		int j;
		s=calloc(i+2,1);
		if(!s){
			perror("calloc");
			exit(EXIT_FAILURE);
		}
		for(j=0;j<i+1;j++)
			s[j]=c;
		printf("%s\n",s);
		free(s);
	}
}
int main()
{
	int num = 5;
	char char1 = 'X';
	scanf("%c",&char1);
	print_chars(num,char1);
	return 0;
}
	
