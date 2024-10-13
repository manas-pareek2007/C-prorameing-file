#include<stdio.h>
int main(){
	
	int a=12;
	
	printf("%d\n",a);
	int b[5]={13,23,43,55,66};
	int *p=&a;
	printf("%d\n",*p);
	*p=34;
	printf("%d\n",a);
	
	int *n=b;
//	printf("%d\n",n);
//	
//	printf("%d\n",(n+1));
//		printf("%d\n",(n+2));
//			printf("%d\n",(n+3));
//		printf("%d\n",(n+4));

int i;	

for(i=0;i<5;i++){
	
	printf("%d\n",*(n+i));
}
}
