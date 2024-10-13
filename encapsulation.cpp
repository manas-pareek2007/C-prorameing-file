#include<iostream>
//encapsulation data and method binding togetther 
using namespace std;
class demo{
	
	private :
		int id;
		string name ;
		public:
		void set(int x,string y){
			
			id=x;
		name=y;
		}
		
		void display(){
			
			cout<<id <<" "<<name<<endl;
		}
	int get_id(){
		
		return id;
	}
	string get_name(){
		
		return name;
	}
};


int main(){
	
	demo obj;
	obj.set(11,"sumit");

cout<<obj.get_name();
cout<<obj.get_id();
	
}
