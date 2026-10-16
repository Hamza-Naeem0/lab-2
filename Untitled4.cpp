#include<iostream>
using namespace std;
class student{
	private:
		
		int marks;
		int roll;
		string name;
		
		public:
			student(int m,int r,string n){
				marks=m;
				roll=r;
				name=n;
			}
		
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Roll no:"<<roll<<endl;
			cout<<"Marks:"<<marks<<endl;
			
		}
	

};

int main(){
	student s1(12,34,"HAmza");
	s1.display();
	
	student s2(13,35,"Qais");
	s2.display();
	
	student s3(14,36,"Reyan");
	s3.display();
	
	
	
	
}