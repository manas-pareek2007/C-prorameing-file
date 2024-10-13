#include<stdio.h>

void  swap(int *a,int *b){
	
		int temp =*a;
	*a=*b;
	*b=temp;
}

int main(){
	
	int  a=10;
	int b=20;
	
	// a=20   b=10
	//call by value
//swap(a,b);
	//call by reference
swap(&a,&b);
	
	printf("swap a value become b and b value beacome a value....\n");
	printf("%d %d ",a,b);
	
}

