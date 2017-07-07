#include<stdio.h>
  int a[]=
    {
	1,2,3,4,5,6,7,8,9,10,20,30,40,50,60
    };
  int *search(int *pt,int n,int key)
   {
	int *p;
	for(p=pt;p<pt+n;p++)
	  if(*p==key)
		return(p-pt);
	}
   void *find(int *pt,int n,int key)
   {
	int *p;
	for(p=pt;p<pt+n;p++)
		if(*p==key)
		  return p;
   }
  void main()
   {
	int i,key,num;
	int *j;
	printf("the elements of array a:\n");
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	  printf("%d\t",a[i]);
	printf("\nthe address of a[0] is:%x\n",&a[0]);
        //printf("%d",sizeof(a)/sizeof(a[0]));
	num=sizeof(a)/sizeof(a[0]);
	printf("please input the key number you want to search:");
	//i=search(a,sizeof(a)/sizeof(a[0]),key);
	i=search(a,num,key);
	scanf("%d",&key);
	printf("the label number of the key number %d in the array is :%d\n",key,i);
	j=find(a,num,key);
	printf("the point value of the key number %d in the array is :%x\n",key,j);
}
