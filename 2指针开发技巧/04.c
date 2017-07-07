#include<stdio.h>
 void main()
   {
	int a[10];
	int *p,i;
	puts("please input ten integer:\n");
	for(i=1;i<=10;i++)
		scanf("%d",&a[i]);
	printf("\n");
	for(p=&a;p < (a+10);p++)
		printf("%d",*p);
  }
