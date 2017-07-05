#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strlwr.h"
//    int main()
    void main()
	{
	  long t1;
	  int i,n,t,t3;
	  char a[100];
	  printf("please input a number string:\n");
	  gets(a);  //输入N进制数存到数组中
//	  fgets(a,100,stdin);  //输入N进制数存到数组中
	  strupr(a); //讲a中的小谢字母转成大写字母
	  t3=strlen(a);
	  t1=0;
	  printf("please input n(2or8or16):\n");
	  scanf("%d",&n);
	  for(i=0;i<t3;i++)
		{
		  if(a[i]-'0'>=n&&a[i]<'A'||a[i]-'A'+10>=n)
	{
	  printf("data error!!");
	  exit(0);
	}
		if(a[i] >= '0' && a[i] <= '9')
		  t=a[i] - '0';
		else if(n>=11&&(a[i]>='A'&&a[i]<='A'+n-10))
		  t=a[i]-'A'+10;
		t1=t1*n+t;
	  }
		printf("the decimal is %ld\n",t1);
	}
