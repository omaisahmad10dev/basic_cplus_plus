#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		void setnumber(int n1,int n2){
			a=n1;
			b=n2;
		}
		
		void addition(complex o1 , complex o2){
			a=o1.a+o2.a;
			b=o1.b+o2.b;
		}
		
		void printnumber(){
			cout<<"Your compex number is: "<<a<<"+"<<b<<"i"<<endl;
		}
	
};
int main(){
	complex c1,c2,c3;
	c1.setnumber(4,6);
	c1.printnumber();
	
	c2.setnumber(2,3);
	c2.printnumber();
	
	c3.addition(c1,c2);
	c3.printnumber();
	
	
	
	return 0;
}
