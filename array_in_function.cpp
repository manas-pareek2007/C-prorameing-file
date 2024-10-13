#include<stdio.h>

 void display(int n[],int size){
 	int i;
for(i=0;i<size;i++){
	
	printf("%d\n",n[i]);
}

}


int min(int m[],int size){
	int i;
	int min=m[0];
	for(i=0;i<size;i++){
		
		if(min>m[i]){
			min=m[i];
		}
	}
	
	return min;
	
	
}


int max(int m[],int size){
	int i;
	int max=m[0];
	for(i=0;i<size;i++){
		
		if(max<m[i]){
			max=m[i];
		}
	}
	
	return max;
	
	
}
int main(){
	
		int a[10]={1,2,3,4,5,6,7,8,9,0};
		int b[5]={11,22,33,4,55};
		
		int n[8]={1,2,3,4,5,-6,7,8,};
		printf("b array ...\n");
		display(b,5);
		printf("a array ...\n");
      	display(a,10);
		printf("n array ...\n");
    	display(n,8);
    	
    	
    	printf("\nb array min=%d",min(b,5));
    		printf("\n n array min=%d",min(n,8));
    			printf("\n a array min=%d",min(a,10));
    			
    				printf("\nb array max=%d",max(b,5));
    		printf("\n n array max=%d",max(n,8));
    			printf("\n a array max=%d",max(a,10));

}

