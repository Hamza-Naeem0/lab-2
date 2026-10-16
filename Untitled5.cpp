#include<iostream>
using namespace std;
class student{
	private:
		
		int marks;
		int roll;
		string name;
		
		public:
			student(){
			cout<<"Enter marks Dedtails"<<endl;
			cout<<"Enter marks"<<endl;
			cin>>marks;
			cout<<"Enter roll no"<<endl;
			cin>>roll;
			cout<<"Enter Name"<<endl;
			cin>>name;
			}
		
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Roll no:"<<roll<<endl;
			cout<<"Marks:"<<marks<<endl;
			
		}
	

};

int main(){
	student s1;
	student s2;
	student s3;

	cout<<"==============="<<endl;
		s1.display();
		s2.display();
	s3.display();
	
	
	
	
	
}