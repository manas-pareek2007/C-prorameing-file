#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5},key,i,count=0;
	printf("enter the value");
	scanf("%d",&key);
	for(i=0;i<5;i++){
		if(a[i]==key){
			printf("element is found\n");
			count++;
		}
	}
	if(count==0){
		printf("element is not found\n");
	}
}
