#include<stdio.h>
main()

{
	int a[4][3];
	int c[3][4];
	int i,j;
	
	for(i=0;i<4;i++)
	{
	for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			c[i][j]=a[j][i];
			
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",c[i][j]);
		}
	printf("\n");
	}
	}

