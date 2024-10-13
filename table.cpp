#include<stdio.h>
main()
{
	int i,n;
	printf("entre the value\n");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("table is: %d*%d=%d\n",n,i,i*n);
	}
}
