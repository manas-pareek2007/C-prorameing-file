#include<iostream>
using namespace std;


//abstraction hide complexity
class demo{
	
	
	private:
		int id;
		string name;
		
	public:
		void set(int x,string y){
			
			id=x;
			name =y;
		}
		
		
		void display(){
			
			cout<<id <<" "<<name<<endl;
		}
		int get_id(){
			
			return id;
		}
		
		void add(int a,int b){
			
			cout<<a+b<<endl;
		}
};





int main(){
	demo obj,ob;
	obj.set(12,"vikash");
	ob.set(11,"dilkush");
	ob.display();
	int a=obj.get_id();
	int b=ob.get_id();
ob.add(a,b);
}
