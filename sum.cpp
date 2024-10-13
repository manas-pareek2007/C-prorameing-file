#include<stdio.h>
int sum(int s[],int size){
	int i;
	int sum=s[0];
	for(i=0;i<size;i++){
		
		
			sum+=s[i];
		
	}
	
	return sum;
}
int main(){

		int s[10]={1,2,3,4,5,6,7,8,9,0};
	printf("sum=%d",sum(s,10));
}
