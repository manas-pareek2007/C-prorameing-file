#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("input number of terms\n");
	scanf("%d",&n);
	printf("the odd numbers are \n");
	for(i=1;i<=n;i++)
	{
		printf("%d ",2*i-1);
		sum+=2*i-1;
	}
	printf("sum of odd numbers  %d \n",sum);
}
