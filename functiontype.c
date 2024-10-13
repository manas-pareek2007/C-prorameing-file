#include<stdio.h>

int sum(int a,int b){
	printf(" first type function\n");
	return a+b;
}


int sum1(){
		printf(" second type function\n");
	int a,b;
	a=12;
	b=13;
	return a+b;
	
	
}

void sum2(int a,int b){
		printf(" third type function\n");
	printf("%d\n",a+b);
}
void sum3(){
		printf(" four type function\n");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a+b);
}

int main(){
	
int a=sum(10,20);
printf(" %d\n",a);
a=sum1();
printf("%d\n",a);

sum2(2,3);
sum3();
}
