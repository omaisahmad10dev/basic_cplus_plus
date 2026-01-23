#include<iostream>
using namespace std;
class complex{
	int a;
	int b;
	public:
		void setData(int v1,int v2){
			a=v1;
			b=v2;
		}
		void setDataBysum(complex x, complex y){
			a=x.a+y.a;
			b=x.b+y.b;
			
		}
		
		void printData(){
			cout<<"your complex number is: "<<a<<"+"<<b<<"i"<<endl;
		}
};
int main(){
	complex c1 , c2 , c3;
	c1.setData( 2,3);
	c1.printData();
	
	c2.setData(3,4);
	c2.printData();
	
	
	c3.setDataBysum(c1,c2);
	c3.printData();
	
	return 0;
}
