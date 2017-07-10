#include<stdio.h>
struct time
{
	int hour;
	int minute;
	int second;
}t;
void main()
{
	FILE *fp=fopen("time","r");
	fread(&t,sizeof(struct time),1,fp);
	while(!kbhit())
	 {
		rewind(fp);
		sleep(1);
		fread(&t,sizeof(struct time),1,fp);
		if(t.second == 59)
	{
	 t.minute=t.minute+1;
	 if(t.minute==60)
	  {
		t.hour=t.hour+1;
		t.minute=0;
		t.second=0;
	  }
	}
	 else
	   t.second=t.second+1;
	printf("%d:%d:%d\n",t.hour,t.minute,t.second);
	FILE *fp=fopen("time","w");
	fwrite(&t,sizeof(struct time),1,fp);
	fclose(fp);
	}
}
