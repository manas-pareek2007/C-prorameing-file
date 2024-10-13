#include<stdio.h>


int main(){
	int a[5]={11,12,13,14,15};
	int b[5]={6,7,8,9,10};

	int k=0;
	int c[10];
	int i;
	for(i=0;i<10;i++){
		
		if(i>4){
			
			c[i]=b[k];
			k++;
		}else{
			c[i]=a[i];
		
		}
		
	}
	
	
	for(i=0;i<10;i++){
		
		printf("%d\n",c[i]);
	}
	
	
	
	
}
