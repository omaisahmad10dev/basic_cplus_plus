#include<iostream>
using namespace std;

int fab(int n){
	if(n<2){
		return 1;
	}
	return fab(n-2) + fab(n-1);
}


int factorial(int n){
	if(n<=1){
		return 1;
		}
	return n* factorial(n-1);
	
}

int main(){
	int a;
	
	cout<<"Enter the value of a "<<endl;
	cin>>a;
//	cout<<"The Factorial of "<<a<<" is "<<factorial(a);
	cout<<"The term in fibonacci sequence at position  "<<a<<" is "<<fab(a)<<endl;
	return 0;
}
