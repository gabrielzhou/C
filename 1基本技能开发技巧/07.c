#include<stdio.h>
void main(int argc, char *argv[])
{
   int x,y,z,x1,y1,z1,i,k,n,j=0;
   while(1)
	{
	printf("please input an integer\n");
	scanf("%d",&n);
	if(n<=10||n>=100)
   {
	printf("data error\n");
	continue;
   }
	else if(n%10==0)
   {
	printf("data error\n");
	continue;
    }
	else
	{
	  x=n/10;
	  y=n%10;
	  z=10*y+x;
	  break;
	}
}
    for(i=11;i<100;i++){
	if(i%10==0)
	  continue;
	else
	{
	x1=i/10;
	y1=i%10;
	z1=10*y1+1;
	if(n+i==z+z1&&n!=z1)
	{
	printf("%d+%d=%d+%d\n",n,i,z,z1);
	j++;
	}
	   else
	continue;
	}
	}
	if(j==0)
	printf("inexistince\n");
	}
