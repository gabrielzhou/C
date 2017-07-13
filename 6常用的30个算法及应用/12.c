#include<stdio.h>
void main()
{
	long i,n;
	printf("please input a number:\n");
	scanf("%ld",&n);
	while(n!=1)
	 {
	  if(n%2==0)
	  {
		printf("%ld/2=%ld\n",n,n/2);
		n=n/2;
	  }
	  else
	  {
		printf("%ld*3+1=%ld\n",n,n*3+1);
		n=n*3+1;
	   }
	}
}
