#include<stdio.h>
int main()
{
	int a[5]={11,12,13,14,15};
	int b[5]={6,7,8,9,10};
	int j=0,k=0,c[10],i;
	for(i=0;i<10;i++)
	{
		 if(i%2==0)
		 {
		 	c[i]=a[k];
		 	k++;
		 }else
		 {
		 	c[i]=b[j];
		 	j++;
		 }
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",c[i]);
	}
} 
