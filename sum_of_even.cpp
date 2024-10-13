#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("input number of terms\n");
	scanf("%d",&n);
	printf("the even numbers are \n");
	for(i=1;i<=n;i++)
	{
		printf("%d ",2*i);
		sum+=2*i;
	}
	printf("sum of even numbers  %d \n",sum);
}
