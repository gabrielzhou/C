#include<stdio.h>
void main()
  {
	int year;
//	printf("please input the year:\n");
//	scanf("%d",&year);

        for(year=0;year<=3000;year++){
	if((year%4==0&&year%100!=0)||year%400==0)
	  printf("%d is a leap year\n",year);
	else
	  printf("%d is not a leap year\n",year);
  }
}
