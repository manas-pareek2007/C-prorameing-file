#include<iostream>
using namespace std;
//template <typename t>
template <typename t>
//void  sum(t a,d b){
//	cout<<a+b<<endl;
//}

void multiply(t a,t b){
	cout<<a*b<<endl;
	
	
}
int main(){
	
//	sum<int ,float>(12,34.99);
//	sum<string,string >("hello","world");
//	sum<float,float>(12.33,44.5);
	multiply<int>(12,3);
	multiply<float>(13.3,8.9);
}
