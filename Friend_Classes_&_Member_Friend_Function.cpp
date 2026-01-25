#include<iostream>
using namespace std;
class complex;

class calculater{
	public:
	
		
		int sumrealcomplex(complex , complex );
		
};
class complex{
	int real , imag;
	friend int calculater::sumrealcomplex(complex , complex );
	public:
		void setnumber(int r, int i){
			real=r;
			imag=i;
		}
		void printnumber(){
			cout<<"your number is "<<real<<"+"<<imag<<"i"<<endl;
		}
		
	
};

int calculater::sumrealcomplex(complex o1,complex o2){
	return (o1.real+o2.real);
}

int main(){
	complex o1 ,o2;
	o1.setnumber(1,3);
	o2.setnumber(2,6);
	o1.printnumber();
	o2.printnumber();
	
	calculater calc;
	int res=calc.sumrealcomplex(o1,o2);
	cout<<"the sum of real part of o1 and o2 is "<<res;
	
	
	
	return 0;
}
