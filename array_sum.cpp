#include<stdio.h>
int main()
{
	int arr[100],i,size,sum=0;
	printf("enter the size of element\n");
	scanf("%d",&size);
	printf("enter the element\n");
	{
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<size;i++)
	sum=sum+arr[i];
	printf("sum of the element %d\n ",sum);
	}
}
