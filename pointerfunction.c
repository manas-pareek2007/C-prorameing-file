#include<stdio.h>

void display(int *p,int size){
	
	int i;	

for(i=0;i<size;i++){
	
	printf("%d\n",*(p+i));
}
}
int main(){

	int b[5]={13,23,43,55,66};


display(b,5);
}
