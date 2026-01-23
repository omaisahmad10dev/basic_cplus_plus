#include<iostream>
using namespace std;
class employee{
	int id;
  static int count;
	public:
		void setData(void){
			cout<<"enter the id "<<endl;
			cin>>id;
			count++;
		}
		void getData(void){
			cout<<"the id of this employee is "<<id<<" and this is the employee number "<<count<<endl;
		}
		static void getcount(void){
			cout<<"The value of count is "<<count<<endl;
		}
};
int employee::count=1;
int main(){
	employee omais,zeeshan,numan;
	omais.setData();
	omais.getData();
	employee::getcount();
	
	zeeshan.setData();
	zeeshan.getData();
	employee::getcount();
	
	numan.setData();
	numan.getData();
	employee::getcount();
	
	return 0;
}
