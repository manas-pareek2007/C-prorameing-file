#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
		if(j>=5-i)
		{
			printf(" %d ",j);
		}
		else
		{
			printf(" - ");
			
		}
		}
		printf("\n");
	}
}
