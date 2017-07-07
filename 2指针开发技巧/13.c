#include<stdio.h>
float *search(float (*p)[4],int n)
  {
	float *pt;
	pt = *(p+n);
	return(pt);
  }
void main()
  {
	float score[][4]={
	   {60,75,82,91},
	   {75,81,91,90},
	   {51,65,78,84},
	   {65,51,78,72},
	};
        
	float *p;
/* 	p=score;
        int i,j;
        for(i=0;i<4;i++)
	{
	for(j=0;j<4;j++)
	{
	printf("%4.1f\t",*(p+i*4+j));
	}
	}
*/
	int i,j;
	printf("enter the student's number you want to search:");
	scanf("%d",&j);
	printf("this student's scroce are:\n");
        p = search(score,j-1);
	for(i=0;i<4;i++)
	{
	printf("%5.1f\t",*(p+i));
	printf("\n");
}
}
