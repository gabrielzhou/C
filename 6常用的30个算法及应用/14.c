#include<stdio.h>
void main()
{
	long i,j,k,l,n;
	printf("please input a number:\n");
	scanf("%ld",&n);
	for(i=0;i<=n;i++)
	  for(j=0;j<=i;j++)
	    for(k=0;k<=j;k++)
	      for(l=0;l<=k;l++)
		if(i*i+j*j+k*k+l*l ==n)
		{
		printf("%ld*%ld+%ld*%ld+%ld*%ld+%ld+%ld=%ld\n",i,i,j,j,k,k,l,l,n);
		}
}
