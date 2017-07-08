#include<stdio.h>
void main()
 {
	float e=1.0,n=1.0;
	int i=1;
		while(1/n>1e-11)
		{
		 e+=1/n;
		 i++;
		 n=i*n;
		}
	printf("the value of e is %f\n",e);
 }
