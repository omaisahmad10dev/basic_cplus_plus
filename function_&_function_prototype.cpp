#include<iostream>
using namespace std;
// ***************EXAMPLE OF FUNCTION****************
//int sum(int a, int b){
//	int c=a+b;
//	return c;
//}

//**********FUNCTION PROTOTYPE************

//	int sum(int a, int b);// Acceptable
// 	int sum(int a,b);//  Not Acceptable
	int sum(int , int);// Acceptable


	void d(void);

int main(){
	int num1,num2;
	cout<<"Enter First Number"<<endl;
	cin>>num1;
	cout<<"Enter Second Number"<<endl;
	cin>>num2;
	cout<<"The Sum Is "<<sum(num1,num2);
	
	 d();
	
	return 0;
}
	void d(){
		cout<<"\n hellow words";
	}
	
	int sum(int a, int b){
	int c=a+b;
	return c;
	}
