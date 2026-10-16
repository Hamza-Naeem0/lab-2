#include<iostream>
using namespace std;

class hamza{
	private:
		int roll;
		string name;
		int marks;
		
		public:
			
			hamza(int r ,string n,int m){
				roll=r;
				name=n;
				marks=m;
				
			}
	void display(){
		cout<<"rollno:"<<roll<<endl;
		cout<<"Name :"<<name<<endl;
		cout<<"Marks:"<<marks<<endl;
	}
	
};

int main(){
	hamza obj(23,"shdk",67);
	obj.display();
	
}
