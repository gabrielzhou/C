#include<stdio.h>
void main()
{
	int i,j,t,a[11];
	printf("please input 10 numbers:\n");
	for(i=1;i<11;i++)
	  scanf("%d",&a[i]);
	for(i=1;i<10;i++)
	 for(j=i+1;j<=10;j++)
	  if(a[i]>a[j])
	   {
	     t=a[i];
	     a[i]=a[j];
	     a[j]=t;
	  }
	printf("the sorted numbers:\n");
	for(i=1;i<=10;i++)
	   printf("%5d",a[i]);
}
