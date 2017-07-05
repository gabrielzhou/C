#include<stdio.h>
void main()
{
	int i,j,a[11][11];
	for(i=1;i<11;i++)
	{
	a[i][i]=1;
	a[i][1]=1;
	}
	for(i=3;i<11;i++)
	{
	for(j=2;j<=i-1;j++)
	{
	a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	}
	for(i=1;i<11;i++)
	{
	for(j=1;j<=i;j++)
	{
	for(j=1;j<=i;j++)
		printf("%4d\t",a[i][j]);
	printf("\n");
	}}
	}
