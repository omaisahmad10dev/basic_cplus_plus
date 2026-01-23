#include<iostream>
using namespace std;
int main(){
	
	int a=3;
	int* b=&a;
	cout<<"the address of a is "<<b<<endl;
	cout<<"the address of a is "<<&a<<endl;
	cout<<"the value of a is "<<*b<<endl;
//	
	int** c=&b;
	cout<<"the address of b is "<<*c<<endl;
	cout<<"the value of b is "<<**c;
	
	
	return 0;
}
