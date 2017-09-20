#include<stdio.h>
#include<sys/time.h>

int main()
{
	int int_size;
	long long_size;
	char char_size;
	short short_size;
	float float_size;
	double double_size;
	time_t time_t_size;
	suseconds_t microtime;
	struct timeval tv;
	
	printf("int:%lu\nlong:%lu\nchar:%lu\nshort:%lu\nfloat:%lu\ndouble:%lu\n",sizeof(int_size),sizeof(long_size),sizeof(char_size),sizeof(short_size),sizeof(float_size),sizeof(double_size));
	printf("time_t:%lu\n",sizeof(time_t_size));
	printf("microtime:%lu\n",sizeof(microtime));
	printf("tv_sec:%lu\n",sizeof(tv.tv_sec));
	return 0;
}
