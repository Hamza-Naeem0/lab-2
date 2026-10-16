#include<iostream>
using namespace std;
class student{
	public:
		
		int marks;
		int roll;
		string name;
		
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Roll no:"<<roll<<endl;
			cout<<"Marks:"<<marks<<endl;
			
		}
	

};

int main(){
	student s1,s2,s3;
	s1.marks=67;
	s1.name="Qais";
	s1.roll=89;
	
	s1.display();
	
	s2.marks=9;
	s2.name="HAmza";
	s2.roll=8009;
	
	s2.display();
	
	s3.marks=34;
	s3.name="Reyan";
	s3.roll=6757;
	
	s3.display();
	
	
}