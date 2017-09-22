#include<stdio.h>
#include<sys/types.h>
#include<regex.h>

int main(int argc, char *argv[])
{
	int status,i;
	int cflags = REG_EXTENDED;
	regmatch_t pmatch[1];
	const size_t nmatch =1;
	regex_t reg;
	const char *pattern ="^\\w+([-+.]\\w+)*@\\w+([-.]\\w+)*.\\w+([-.]\\w+)*$";
	char *buf="chenjiayi@126.com";
	regcomp(&reg,pattern,cflags);
	status = regexec(&reg,buf,nmatch,pmatch,0);
	if(status ==REG_NOMATCH)
		perror("No match\n");
	else if(0 == status)
	{
		printf("比较成功");
		for(i=pmatch[0].rm_so;i<pmatch[0].rm_eo;++i) putchar(buf[i]);
		printf("\n");
	}
	regfree(&reg);
	return 0;
}	
