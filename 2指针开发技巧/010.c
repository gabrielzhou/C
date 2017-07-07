#include<stdio.h>
#include<string.h>
int match(char *B,char *A)
  {
	int i,j,start=0;
	int lastB=strlen(B)-1;
	int lastA=strlen(A)-1;
	int endmatch =lastA;
	for(j=0;endmatch<=lastB;endmatch++,start++)
	  {
		if(B[endmatch]==A[lastA])
		  for(j=0,i=start;j<lastB&&B[i]==A[j];)
		    i++,j++;
		if(j==lastA)
	{
	return (start+1);
	}
		}
	if(endmatch>lastB)
	{
		printf("the string is not matchable!\n");
		return -1;
	}
  }
void main()
  {
	char s[]="one world,one dream";
	char t[]="world";
	int p = match(s,t);
	if(p!=-1)
	  {
		printf("Matchable!\n");
		printf("the start position is %d\n",p);
	  }
	printf("\n");
}
