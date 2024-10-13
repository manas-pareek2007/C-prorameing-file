#include<stdio.h>
main()
{
	int arr [100],i,size;
	printf("enter the size of element \n");
	scanf("%d",&size);
	printf("enter the element \n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(i=size-1;i>=0;i--)
	printf("\nreverse of element: %d",arr[i]);
}
