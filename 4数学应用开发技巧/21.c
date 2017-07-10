#include<stdio.h>
void main()
 {
	int a[4][4],i,j,sum=0;
	printf("please input numbers:\n");
	for(i=0;i<=3;i++)
	 for(j=0;j<=3;j++)
		scanf("%d",&a[i][j]);
	printf("this 4*4 matrix is:\n");
	for(i=0;i<=3;i++)
	{
	for(j=0;j<=3;j++)
	printf("%d ",a[i][j]);
	printf("\n");
	}
	for(i=0;i<=3;i++)
	 for(j=0;j<=3;j++)
	 if(i==j)
	  sum+=a[i][j];
	  printf("diagonal's sum is %d\n",sum);
 }
