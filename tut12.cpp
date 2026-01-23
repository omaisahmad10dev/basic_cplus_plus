#include<iostream>
using namespace std;
int main(){
	// WHAT IS POINTER--->Data type which is holds to another data type
		int a=3;
		int*b=&a;
		cout<<"The address of a is  "<<&a<<endl;
		cout<<"the address of a is  "<<b<<endl;
		
		//  * --> (valved at) dereference operators
		
		cout<<"The value at the address of b is"<<*b<<endl;
		
		
		//POINTER TO POINTER
		
		int**c=&b;
		cout<<"The address of b is"<<c<<endl;
		cout<<"The address of b is "<<&b<<endl;
		cout<<"The value at address c is "<<*c<<endl;
		cout<<"The value at address value_at(value_at (c)) is"<<**c;
		
	
	return 0;
}
