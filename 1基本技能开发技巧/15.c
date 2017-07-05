#include<stdio.h>
float average(float array[],int n)
  {
	int i;
	float aver,sum=0;
	for(i=0;i<n;i++)
		sum+=array[i];
	aver=sum/n;
	return(aver);
  }
  void main()
	{
//	  float average(float array[],int n);
	  float height[100],aver;
	  int i,n;
	  printf("please input the number of students:\n");
	  scanf("%d",&n);
	  printf("please input the student's height:\n");
	  for(i=0;i<n;i++)
		scanf("%f",&height[i]);
	  printf("\n");
	  aver=average(height,n);
	  printf("average height is %6.2f\n",aver);
}
