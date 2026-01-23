#include<iostream>
using namespace std;
// this will not swap a and b
//void swap( int a  ,int b){
//	int temp=a;
//	a=b;
//	b=temp;
//}
//// this will swap a and b using in swappointer
//void swappointer( int* a  ,int* b){
//	int omais=*a;
//	*a=*b;
//	*b=omais;
//}

//void swapReferencevar( int &a  , int &b){
//	int temp=a;
//	a=b;
//	b=temp;
//
//}

int & swapReferencevar( int &a  , int &b){
	int temp=a;
	a=b;
	b=temp;
	return a;

}




int main(){
	int a=4,b=5; 
	 
//	cout<<"the value of a is"<<a<<"the value of b is"<<b<<endl;
//	swap(a,b); this will not swap

//	swappointer(&a,&b);// this will swap a and b using pointer referance
//	cout<<"the value of a is"<<a<<"the value of b is"<<b<<endl;
	
	swapReferencevar ( a ,b);
			cout<<"the value of a is"<<a<<"the value of b is"<<b<<endl;
	return 0;
}
