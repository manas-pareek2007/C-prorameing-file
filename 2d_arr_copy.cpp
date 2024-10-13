#include<stdio.h>
int main()
{
  int i,j;
int a[3][3]={{1,2,3},
             {4,5,6},
             {7,8,9}};
int b[3][3]={{10,11,12},
             {13,14,15},
             {16,17,18}};
int c[6][3];
int k=0;
for(i=0;i<6;i++)
{
for(j=0;j<3;j++)
{
	if(i>2)
	{
		c[i][j]=b[k][j];
	}else{
			c[i][j]=a[i][j];
	}
 }			 	
 if(i>2)
 {
 	k++;
 }
}

for(i=0;i<6;i++)
{
for(j=0;j<3;j++)
	{
	printf("%d ",c[i][j]);
}
}
printf("\n");		
}
