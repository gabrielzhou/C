#include<stdio.h>
void main()
{
	int i;
	long f[61];
	f[1]=1,f[2]=1;
	for(i=3;i<61;i++)
	   f[i]=f[i-1]+f[i-2];
	for(i=1;i<61;i++)
	  {
	    printf("\t%ld",f[i]);
	    if(i%5==0)
	    printf("\n");
	  }
}
