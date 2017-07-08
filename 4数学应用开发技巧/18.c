#include<stdio.h>
#include<math.h>
void main()
 {
	float x0,x1,x2,f0,f1,f2;
	do
	 {
	  printf("enter x1,x2:\n");
	  scanf("%f,%f",&x1,&x2);
	  f1=sin(x1);
	  f2=sin(x2);
	 }
	while(f1*f2>0);
	do
	 {
	  x0=(x1+x2)/2;
	  f0=sin(x0);
	  if((f0*f1)<0)
	   {
		x2=x0;
		f2=f0;
	   }
	  else
	   {
		x1=x0;
		f1=f0;
	   }
	  } while(fabs(f0)>=1e-5);
	printf("x=%6.2f\n",x0);
 }
