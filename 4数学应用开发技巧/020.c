#include<stdio.h>
void main()
 {
	int a[10][10],i,j;
	for(i=1;i<=5;i++)
	 for(j=1;j<=10-i;j++)
	  {
	   a[i][j]=i;
	   a[10-i][j]=i;
	   a[j][i]=i;
	   a[j][10-i]=i;
	  }
	for(i=1;i<=9;i++)
	 {
	   for(j=1;j<=9;j++)
		printf("%d ",a[i][j]);
	  printf("\n");
	 }
 }
