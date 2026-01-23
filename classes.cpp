#include<iostream>
using namespace std;

class book
{
	private:
		char name[20];
		float price;
		public:
			void input()
			{
				cout<<"Enter the book name: "<<endl;
				cin>>name;
				cout<<"The book price is: ";
				cin>>price;
			}
			void output()
			{
				cout<<"book name is: "<<name<<endl;
				cout<<"The book price is: ";
				cout<<price<<endl;
				
			}
			
		
};

int main(){
	book b1;
	
	b1.input();
	b1.output();
	
	return 0;
}
