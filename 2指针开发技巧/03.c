#include<stdio.h>
 struct student
  {
	int num;
	char name[20];
	char sex;
	int age;
	float score;
  };

  void main()
   {
	struct student student1={1001,"liming",'M',20,92.5};
	struct student *p;
	p=&student1;
	printf("number:%d\n",p->num);
	printf("name:%s\n",p->name);
	printf("sex:%c\n",p->sex);
	printf("age:%d\n",p->age);
	printf("score:%f\n",p->score);
  }
