#include<iostream>
using namespace std;
class employee{
	int id;
	int salary;
	public:
		 
		void setID(void){
			salary= 122;
			cout<<"Enter the ID of employee"<<endl;
			cin>>id;
			
		}
		void getID(void){
			cout<<"The ID of this employee is: ";
			cout<<id<<endl;
			cout<<"and this employee salary is:"<<salary<<endl;
		}
};
int main(){
//	employee omais,yaman,mujeeb;
//	omais.setID();
//	omais.getID();
//	
//	yaman.setID();
//	yaman.getID();
//	
//	mujeeb.setID();
//	mujeeb.getID();

	 employee compnay[4];
	for(int i=0; i<4; i++){
		compnay[i].setID();
		compnay[i].getID();
	}
	return 0;
}
