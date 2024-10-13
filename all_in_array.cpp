#include<stdio.h>
main()
{
	int a[100],i,n;
	printf("enter the value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	int min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
	}
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
	sum+=a[i];
	}
	int count=0,odd=0;
	for(i=0;i<n;i++)
	{
	
	if(a[i]%2==0)
		{
			count++;
		printf("even number=%d\n",a[i]);
	}
	else{
		odd++;
		printf("odd number=%d\n",a[i]);
		
	}
	}
	printf("min=%d, max=%d, sum=%d, odd=%d, even=%d",min, max, sum, odd, count);
}
