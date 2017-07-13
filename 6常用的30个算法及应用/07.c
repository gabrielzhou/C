#include<stdio.h>
void search(int key,int a[],int n)
{
	int i,count =0,count1=0;
	for(i=0;i<n;i++)
	 {
	  count++;
	  if(a[i]==key)
	{
	  printf("search %d times a[%d]=%d\n",count,i,key);
	  count1++;
	}
	}
	if(count1==0)
	  printf("no found!\n");
}
void main()
{
	int n,key,a[100],i;
	printf("please input the length of array:\n");
	scanf("%d",&n);
	printf("please input element:\n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	printf("please input the number which do you want to search:\n");
	scanf("%d",&key);
	search(key,a,n);
}
