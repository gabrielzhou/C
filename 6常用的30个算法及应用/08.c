#include<stdio.h>
void binary_search(int key,int a[],int n)
{
	int low,high,mid,count=0,count1=0;
	low = 0;
	high = n-1;
	while(low<high)
	  {
	    count++;
	    mid=(low+high)/2;
	    if(key<a[mid])
		high=mid-1;
	    else if(key>a[mid])
		low=mid+1;
	    else if(key==a[mid])
		{
		printf("success!\nsearch %d times! a[%d]=%d\n",count,mid,key);
		count1++;
		break;
		}
	  }
	 if(count1==0)
		printf("no found!\n");
}
void main()
{
	int i,key,a[100],n;
	printf("please input the length of array:\n");
	scanf("%d",&n);
	printf("please input the element:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("please input the number which do you want to search:\n");
	scanf("%d",key);
	binary_search(key,a,n);
} 
