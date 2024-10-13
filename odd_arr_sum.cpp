#include<stdio.h>
int main()
{
	int arr[100],i,size,sum=0;
	printf("enter the size of element\n");
	scanf("%d",&size);
	printf(" odd numbers\n");
		for(i=1;i<=size;i++)
	{
printf("%d ",2*i-1);
sum+=2*i-1;
	}
	printf("sum of odd numbers %d",sum);
}
