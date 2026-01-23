#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"tell me your age";
	cin>>age;
//	if(age<18){
//		cout<<"you are not come to school";
//		
//	}
//	else if(age==16){
//		cout<<"you are kid pass come to school";
//	}
//	else{
//		cout<<"you are come to school";
//	}

				switch(age)
							{
		case 23:
		cout<<"You are 23";
			break;
		case 12:
			cout<<"You are 12";
				break;
			default:{
				cout<<"no special case";
			
			}
	}

	return 0;
}
