#include<iostream>
using namespace std;
inline int product(int a,int b){
//	static int c=0; // this is execute only onec time
//	c=c+1;   //next time this function is run, the value of c will be retained
	return a*b;
}

float moneyreceived(int currentmoney,float factor=1.02){
	return currentmoney*factor ;
}
int main(){
	int a;
	int b;
//	cout<<"enter the value of a and b "<<endl;
//	cin>>a>>b;
//	cout<<"The product of a and b "<<product(a,b)<<endl;

	int money=100000;
	cout<<"if you have "<<money<<" RS in your bank account,you will receive "<<moneyreceived(money)<<" RS after 1 year "<<endl;
	cout<<"For VIP: if you have "<<money<<" RS in your bank account,you will receive "<<moneyreceived(money,1.05)<<" RS after 1 year "<<endl;
	
	
	return 0;
}
