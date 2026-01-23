#include<iostream>
using namespace std;
int sum(int a,int b){
	cout<<"Function Overloading with 2 arguments"<<endl;
	return a+b;
}
int sum(int a,int b,int c){
	cout<<"Function Overloading with 3 arguments"<<endl;
	return a+b+c;
}
// The volume of cylinder is
int volume(int r,int h){
	return (3.14*r*r*h);
	
}
// Volume of cube is
int volume(int a){
	return (a*a*a);
}
// Volume of rectangle is
int volume(int l,int w,int h){
	return (l*w*h);
}
int main(){
	
	cout<<"The sum of 3 and 5 is "<<sum(3,5)<<endl;
	cout<<"The sum of 3,6 and 5 is "<<sum(3,6,5)<<endl;
	cout<<"The volume of cylinder 3 and 4 is "<<volume(3,4)<<endl;
	cout<<"The volume of cube 3,6 and 5 is "<<volume(3,6,5)<<endl;
	cout<<"The volume of rectangle 2,5 and 7 is "<<volume(2,5,7)<<endl;
	
	return 0;
}
