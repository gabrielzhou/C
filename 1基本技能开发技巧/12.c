#include<stdio.h>
void main()
{
	char c;
	int letter=0,digit=0,space=0,other=0;
	printf("please input some characters\n");
	while((c=getchar())!='\n')
	{
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
	letter++;
	else if(c>='0'&&c<='9')
	digit++;
	else if(c==' ')
	space++;
	else
	other++;
}
	printf("letter=%d,digit=%d,space=%d,other=%d\n",letter,digit,space,other);
}
