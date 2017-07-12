#include<stdio.h>
void main()
{
	int i,j,t,a[11];
	printf("please input 10 numbers:\n");
	for(i=1;i<11;i++)
	   scanf("%d",&a[i]);
	for(i=1;i<10;i++)
	  for(j=1;j<11-i;j++)
		if(a[j]>a[j+1])
		{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		}
	printf("the scorted numbers:\n");
	for(i=1;i<=10;i++)
		printf("%5d",a[i]);
}
