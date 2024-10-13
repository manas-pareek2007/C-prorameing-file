#include<stdio.h>
int main()
{
	int arr[100],i,size,sum=0;
	printf("enter the size of element\n");
	scanf("%d",&size);
	printf(" even numbers\n");
		for(i=1;i<=size;i++)
	{
printf("%d ",2*i);
sum+=2*i;
	}
	printf("sum of even numbers %d",sum);
}
