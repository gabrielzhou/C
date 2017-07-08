#include<stdio.h>
#include<math.h>
 float Newton(float a,float b,float c,float d)
 {
	float x=1,x0,f,f1;
	do
	 {
	  x0=x;
	  f=((a*x0+b)*x0+c)*x0+d;
	  f1=(3*a*x0+2*b)*x0+c;
	  x=x0-f/f1;
 } while(fabs(x-x0)>=1e-5);
 return(x);
 }
void main()
 {
	float a,b,c,d;
	printf("please input four numbers a b c d:\n");
	scanf("%f,%f,%f,%f",&a,&b,&c,&d);
	printf("%.2fx^3+%.2fx^2+%.2fx+%.2f=0\n",a,b,c,c);
	printf("x=%.5f\n",Newton(a,b,c,d));
 }
