#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  struct emploee
   {
	char name[10];
	int salary;
   } emp[20];
void main()
  {
	FILE *fp1,*fp2;
	int i,j,n,flag,salary;
	char name[10],filename[50];
	printf("please input filename:\n");
	scanf("%s",filename);
	printf("please input number of emploees:\n");
	scanf("%d",&n);
	printf("please input number and salary:\n");
	for(i=0;i<n;i++)
	  {
	   printf("NO%d:\n",i+1);
	   scanf("%s%d",emp[i].name,&emp[i].salary);
	  }
	if((fp1=fopen(filename,"ab"))==NULL)
	 {
	  printf("can not open the file\n");
	  exit(0);
	 }
	for(i=0;i<n;i++)
	  if(fwrite(&emp[i],sizeof(struct emploee),1,fp1)!=1)
	     printf("error\n");
	fclose(fp1);
	if((fp2=fopen(filename,"rb"))==NULL)
	  {
	   printf("can not open file\n");
	   exit(0);
	 }
	printf("original data:\n");
	for(i=0;fread(&emp[i],sizeof(struct emploee),1,fp2)!=0;i++)
	  printf("%8s%7d\n",emp[i].name,emp[i].salary);
	n=i;
	fclose(fp2);
	printf("input name which do you want to delete:\n");
	scanf("%s",name);
	for(flag=1,i=0;flag&&i<n;i++)
	  {
		if(strcmp(name,emp[i].name)==0)
	{
	 for(j=1;j<n-1;j++)
	  {
	    strcpy(emp[j].name,emp[j+1].name);
	    emp[j].salary=emp[j+1].salary;
	  }
	flag=0;
	}
	}
	if(!flag)
	  n=n-1;
	else
	  printf("not found\n");
	printf("now,the content of file:\n");
	fp2=fopen(filename,"wb");
	for(i=0;i<n;i++)
	 fwrite(&emp[i],sizeof(struct emploee),1,fp2);
	fclose(fp2);
	fp2=fopen(filename,"rb");
	for(i=0;fread(&emp[i],sizeof(struct emploee),1,fp2)!=0;i++)
	 printf("%8s%7d\n",emp[i].name,emp[i].salary);
	fclose(fp2);
}
