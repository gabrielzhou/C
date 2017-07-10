#include<stdio.h>
void main()
 {
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("please input matrix a:\n");
	for(i=0;i<=2;i++)
	  for(j=0;j<=2;j++)
	   scanf("%d",&a[i][j]);
	printf("please input matrix b:\n");
	for(i=0;i<=2;i++)
	 for(j=0;j<=2;j++)
	   scanf("%d",&b[i][j]);
	for(i=0;i<=2;i++)
	 for(j=0;j<=2;j++)
	  c[i][j]=a[i][j]+b[i][j];
	printf("the sum is:\n");
	for(i=0;i<=2;i++)
	  {
	   for(j=0;j<=2;j++)
		printf("%d ",c[i][j]);
		printf("\n");
	  }
  }
