#include<iostream>
#include<string>
using namespace std;
class binary
{
	string u;
	public:
		void read(void);
		void chk_bin(void);
		void ones_compliment(void);
		void display(void);
};
void binary::read(void){
	cout<<"Enter a binary number: "<<endl;
	cin>>u;
}
void binary::chk_bin(void){
	for(int i=0; i< u.length();i++){
		if (u.at(i)!='0' && u.at(i)!='1'){
			cout<<"inicorrect binary number"<<endl;
			exit(0);
		}
	}
}
void binary::ones_compliment(void){
	chk_bin();
	for(int i=0; i< u.length();i++){
		if (u.at(i)=='1'){
			 u.at(i)='0';
		}
		else{
			u.at(i)='1';
		}
	}
}
void binary::display(void){
	cout<<"Display your binary number:"<<endl;
	for(int i=0; i< u.length(); i++){
		cout<<u.at(i);
	}
}
int main(){
	binary b;
	b.read();
	b.chk_bin();
	b.ones_compliment();
	b.display();
	return 0;
}
