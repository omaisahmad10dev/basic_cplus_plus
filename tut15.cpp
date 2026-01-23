#include<iostream>
using namespace std;

//functiom prototype
//Type function-name (arguments)
//int sum(int a, int b)---> Acceptable
//int sum(int a,b) ----> 	Not acceptable 
int sum(int a, int b);	// ---> Acceptable

int main(){
	
	int num1,num2;
	cout<<"enter first number"<<endl;
	cin>>num1;
	cout<<"enter second number"<<endl;
	cin>>num2;
// num1 and num2 IS ACCTUAL PARAMETERS	
	cout<<"the sum is"<<sum(num1,num2);
	
	return 0;
}
int sum(int a,int b){
// 	FORMAL PARAMETERS  a and b will be takig values from actual parameters  num2 and num2
	int c=a*b;
	return c;
}
