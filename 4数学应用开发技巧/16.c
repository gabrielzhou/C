#include<stdio.h>
void main()
 {
	int a,b,c,m,t;
	printf("please input two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a<b)
	 {
	  t=a;
	  a=b;
	  b=t;
	 }
	m=a*b;
	c=a%b;
	while(c!=0)
	  {
	   a=b;
	   b=c;
	   c=a%b;
	  }
	printf("the max common devisor:%d\n",b);
	printf("the min common devisor:%d\n",m/b);
 }
