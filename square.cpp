#include<stdio.h>
main()
{
	int i,j;
	i=1;
	do
	{
		j=1;
		do
		{
			printf("*");
			j++;
		}
		while(j<=4);
		printf("\n");
		i++;
	}
	while(i<=4);
}
