#include<stdio.h>
main()
{
	int i;
	int a[5]={11,12,13,14,15};
	int b[5];
	for(i=0;i<5;i++)
	{
	b[i]=a[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
}
