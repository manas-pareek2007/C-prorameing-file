#include<iostream>

using namespace std;

//access specifier public private protetd
class student{
	  
public:
	  int id;
	  int roll;
	  string name;

	
	void set(int x,int y,string s){
		
		id=x;
		roll=y;
		name=s;
	}
	void dis()
	{
		cout<<id <<" "<<roll<<" "<<name<<endl;
	}
	
};
int main(){
	student obj,b;
obj.set(11,101,"vishal");
b.set(12,102,"manas");
obj.dis();

b.dis();	

cout<<b.name;
}
