#include<stdio.h>

int main()
{
	int int_size;
	long long_size;
	char char_size;
	short short_size;
	float float_size;
	double double_size;
	
	printf("int:%lu\nlong:%lu\nchar:%lu\nshort:%lu\nfloat:%lu\ndouble:%lu\n",sizeof(int_size),sizeof(long_size),sizeof(char_size),sizeof(short_size),sizeof(float_size),sizeof(double_size));
	return 0;
}
