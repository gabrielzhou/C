#include<stdio.h>
void main()
 {
	int a[2][3],b[3][2],c[2][2],i,j,k,sum;
	printf("please input martrix a:\n");
	for(i=0;i<=1;i++)
	 for(j=0;j<=2;j++)
	  scanf("%d",&a[i][j]);
	printf("please input matrix b:\n");
	for(i=0;i<=2;i++)
	 for(j=0;j<=1;j++)
	  scanf("%d",&b[i][j]);
	for(i=0;i<=1;i++)
	 for(k=0;k<=1;k++)
	  {
	sum=0;
	for(j=0;j<=2;j++)
	   sum+=a[i][j]*b[j][k];
	c[i][j]=sum;
          }	
	printf("the product is:\n");
	for(i=0;i<=i;i++)
	 {
	  for(j=0;j<=1;j++)
	printf("%d\t",c[i][j]);
	  printf("\n");
	}
}
