#include<iostream>
using namespace std;

class student{
	public:
		int marks;
		int roll;
		string name;
		
		void display(){
			cout<<marks<<"  "<<name<<"  "<<roll;
		}
		
		
};
int main(){
	


student b;
b.marks=10;
b.name="hmza";

b.roll=788;

b.display();


}