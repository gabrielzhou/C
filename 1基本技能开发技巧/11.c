#include<stdio.h>
void main()
{
	int x,y,z,i;
	for(x=1;x<10;x++)
	    for(y=1;y<10;y++)
		for(z=0;z<10;z++)
		{
		i=100*x+10*y+z+100*y+10*z+z;
		if(i==532)
		printf("x=%d,y=%d,z=%d\n",x,y,z);
		}
	}
