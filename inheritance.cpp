#include<iostream>
using namespace std;

class First{//base clas

	
	public:
	void run1(){
		
		cout<<"inside class first";
	}

};

class Second{//base clas

	
	public:
	void display(){
		
		cout<<"inside class second";
	}

};



//inheritance   single level multiple multilevel  hybrid  
class depart:public First,public Second{ //derivered class
	
	public:
		void run(){
			
			cout<<"inside class depart...";
		}
	
};
int main(){
	
depart d;
d.display();
d.run();
d.run1();

}
