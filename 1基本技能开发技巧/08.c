#include<stdio.h>
void main()
{
    int score;
    printf("please enter score(score<=100):");
    scanf("%d",&score);
    if(score==100)
	{
	score=90;
	}
	score = score/10;
	switch(score)
	{
	case 9:
	printf("the grade is A\n");
	break;
	case 8:
	printf("the grade is B\n");
	break;
	case 7:
	printf("the grade is C\n");
	break;
	case 6:
	printf("the grade is D\n");
	break;
	case 5:
	printf("the grade is E\n");
	break;
	case 4:
	printf("the grade is F\n");
	break;
	case 3:
	printf("the grade is G\n");
	break;
	case 2:
	printf("the grade is H\n");
	break;
	case 1:
	printf("the grade is I\n");
	break;
	case 0:
	printf("the grade is J\n");
	break;
}
}
