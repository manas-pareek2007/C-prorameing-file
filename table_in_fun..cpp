#include <stdio.h> 
void display(int n) { 
	for(int i = 1; i <= 10; i++) { 
		printf("%d * %d = %d\n",n,i,i*n); 
	} 
} 
int main() {  
	int n; 
	printf("Enter the no. : "); 
	scanf("%d",&n); 
	printf("\n"); 
	display(n); 
	
} 
