#include<iostream>
using namespace std;
void swap(int* a, int* b){
	int omais=*a;
		a=b;
		b=omais;
}
int main(){
	int a=5; int b=6;
	
	cout<<"The value of a is "<<a;cout<<"The value of b is "<<b<<endl;
	swap(a,b);
	cout<<"The value of a is "<<a;cout<<"The value of b is "<<b<<endl;
	return 0;
}
