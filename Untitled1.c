#include<stdio.h>

int main(){
	//malloc calloc free
	//100 104  108
int i;
	int *p =(int *)calloc(1,sizeof(int));
	*p=10;
*(p+1)=20;
free(p);
printf("%d",*p);

for(i=0;i<5;i++){
	
	scanf("%d",&p[i]);
}

for(i=0;i<5;i++){
	
	printf("%d\n",p[i]);
}
}
