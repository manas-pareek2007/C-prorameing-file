#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[50]={1,22,3,2,9,6,5,4,33,3};
	
	int i;
	sort(a,a+10);
	for(i=0;i<10;i++){
		
		cout<<a[i]<<endl;
	}
	
	
	int b=10;
	int c=9;
	cout<<"minimum in two variable: "<<max(b,c);
	
}
