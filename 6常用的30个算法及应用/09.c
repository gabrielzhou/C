#include <stdio.h>
struct index
{
	int key;
	int start;
	int end;
} index_table[4];
int block_search(int key,int a[])
{
	int i,j;
	i=1;
	while(i<=3&&key>index_table[i].key)
	  i++;
	if(i>3)
	  return 0;
	j=index_table[i].start;
	while(j<=index_table[i].end&&a[j]!=key)
	  j++;
	if(j>index_table[i].end)
	  j=0;
	return j;
}
void main()
{
	int i,j=0,k,key,a[16];
	printf("please input the number:\n");
	for(i=1;i<16;i++)
	  scanf("%d",&a[i]);
	for(i=1;i<=3;i++)
	  {
	    index_table[i].start=j+1;
	    j=j+1;
	    index_table[i].end=j+4;
	    j=j+4;
	    index_table[i].key=a[j];
	  }
	printf("please input the number which you want to search:\n");
	 scanf("%d",&key);
	k=block_search(key,a);
	if(k!=0)
	  printf("success ! the position is :%d\n",k);
	else
	  printf("no found!\n");
}
