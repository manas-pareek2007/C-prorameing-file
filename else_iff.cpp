#include<stdio.h>
main()
{
	int totalmarks;
	printf("entre your total marks\n");
	scanf("%d",&totalmarks);
	if(totalmarks>= 540)
	{
	printf("your are eligble for 100 percent scholar\n ");
	printf("congrats\n");
	}
	else if(totalmarks>= 480)
	{
	printf("you are eligble for 80 percent of scholar\n");
	printf("congrats\n");
	}
	else if(totalmarks>=300)
	{
	printf("you are eligble for 60 percent of scholar\n ");
	printf("congrats\n");
	}
	else
	{
	printf("you are not eligble for scholar");
	}
}
