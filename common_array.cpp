#include<stdio.h>
main()
{
	
	int a[5]={11,12,13,14,15};
	int b[5]={11,13,1,17,15};

	int i,j;
	int c[10];
	int count=0;
	int k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++){
			if(a[i]==b[j])
{
	count++;
	c[k]=a[i];
	k++;
		}
     
	}	}
	printf("common =%d\n",count);
	for(i=0;i<k;i++){
		printf("value in c=%d\n",c[i]);
	}
}
