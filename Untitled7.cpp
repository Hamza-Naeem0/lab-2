#include<iostream>
using namespace std;

class book{
public:
		string title;
		string author;
		int price;
		
		public:
			
			book(string t,string a,int p){
				title=t;
				author=a;
				price=p;
			}
		
		void display(){
			cout<<"DEtaails of book"<<endl;
			cout<<"Title:"<<title<<endl;
			cout<<"Author:"<<author<<endl;
			cout<<"Price:"<<price<<endl;
		}
	
	
};
int main (){

string t,a;
int p;

cout<<"Eter tite"<<endl;
cin>>t;
cout<<"Enter author"<<endl;
cin>>a;
cout<<"Enter price"<<endl;
cin>>p;

book b1(t,a,p);


cout<<"Eter tite"<<endl;
cin>>t;
cout<<"Enter author"<<endl;
cin>>a;
cout<<"Enter price"<<endl;
cin>>p;

book b2(t,a,p);


cout<<"Eter tite"<<endl;
cin>>t;
cout<<"Enter author"<<endl;
cin>>a;
cout<<"Enter price"<<endl;
cin>>p;

book b3(t,a,p);

b1.display();
b2.display();
b3.display();


	
	
}