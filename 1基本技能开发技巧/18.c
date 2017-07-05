#include<stdio.h>
void main()
  {
        int i;
	float h=100,s=100;
	for(i=1;i<=9;i++)
	{
	h=h/2;
	s+=h*2;
	}
	printf("the total length is %f\n",s);
	printf("the lenght of tenth time is %f\n",h/1);
  }
