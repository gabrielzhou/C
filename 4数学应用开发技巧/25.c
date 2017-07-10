#include<stdio.h>
void main()
 {
	int j=0,a[5];
	long k=100000,i=95860;
	while(1)
	 {
		k=100000;
		while(k>=10)
		{
		a[j]=(i%k)/(k/10);
		k=k/10;
		j++;
		}
		if((a[0]==a[4])&&(a[1]==a[3]))
		{
		printf("the new number kelometers is :%d%d%d%d%d\n",a[0],a[1],a[2],a[3],a[4]);
		printf("an average speed is:%.2f\n",(i-95859)/2.0);
		goto out;
		}
	        i++;
		out: continue;
		 break;
		//break;
		}
 }
