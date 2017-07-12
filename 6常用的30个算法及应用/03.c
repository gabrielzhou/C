#include<stdio.h>
void insort(int s[],int n)
{
	int i,j;
	for(i=2;i<=n;i++)
	 {
	  s[0]=s[i];
	  j=i-1;
	  while(s[0]<s[j])
	{
	 s[j+1]=s[j];
	 j--;
	}
	 s[j+1]=s[0];
	}
}
void main()
{
	int a[11],i;
	printf("please input the number:\n");
	for(i=1;i<=10;i++)
	 scanf("%d",&a[i]);
	printf("the original order:\n");
	for(i=1;i<11;i++)
	 printf("%5d",a[i]);
	insort(a,10);
	printf("\nthe sorted numbers:\n");
	for(i=1;i<11;i++)
	  printf("%5d",a[i]);
}
