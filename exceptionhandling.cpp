#include<iostream>
using namespace std;


//exception handling try catch  
int main(){
	int a=10;
	int b=0;
	
//	cout<<a/b<<endl;
	try{
		
		if(b==0){
			
			throw "zero division exception";
		}else{
			
			cout<<a/b<<endl;
		}
	}
	catch(const char *e){
		cout<<e<<endl;
	}
	
cout<<"hello world..\n";	
}
