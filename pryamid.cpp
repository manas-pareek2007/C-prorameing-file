#include<stdio.h>
main()
{
	int i,j,sp,no,n;
	printf("entre the value\n");
	scanf("%d",&no);
	n=no;
	for(i=1;i<=no;i++)
	{
		for(sp=1;sp<=n;sp++)
		{
			printf(" ");
			
		}
		n--;
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
			
		}
		printf("\n");
	}
}
