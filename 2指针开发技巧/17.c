#include<stdio.h>
void main()
  {
	char *Month[]={
	"january",
	"february",
	"march",
	"april",
	"may",
	"june",
	"july",
	"august",
	"september",
	"october",
	"nobember",
	"december"
	};
	int i;
	char **p;
	p=Month;
	printf("input a number for month\n");
	scanf("%d",&i);
	printf("the month is:");
	printf("%s\n", *(p+i-1));
  }
