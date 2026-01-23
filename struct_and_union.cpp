#include<iostream>

using namespace std;

class employee
{
	private:
	int a,b,c;
	public:
		int d,e;
		void setdata(int a1, int b1, int c1);
		void hellow(){
			cout<<"Enter the value of a is "<<a<<endl;
			cout<<"Enter the value of b is "<<b<<endl;
			cout<<"Enter the value of c is "<<c<<endl;
			cout<<"Enter the value of d is "<<d<<endl;
			cout<<"Enter the value of e is "<<e<<endl;
		}
};

			
void employee::setdata(int a1, int b1, int c1){
	a=a1;
	b=b1;
	c=c1;
}
int main(){
	
			
		
			
	employee omais;
	omais.d=23;
	omais.e=32;
	omais.setdata(2,3,4);
	omais.hellow();
		
	
	
	return 0;
}
