#include<iostream>
using namespace std;
int main(){
//	cout<<"this is tutorial 9";
	int age;
	cout<<"Tell me your age";
	cin>>age;
//	***************selection control structure:if else-if else  ladder**************
/// (((((((((((((((If-else-if-else checks multiple conditions to control program flow.))))))))))))))))
//	if((age<17)&&(age>2)){
//		cout<<"You are not come to the school"<<endl;
//	}
//	else if(age==17){
//		cout<<"You are a kid and you will get a kid pass to the school";
//	}
//	else if(age<3){
//		cout<<"you are not yet born";
//	}
//	else{
//		cout<<"You can come to school";
//	}
//	***************selection control structure: switch case statement**************
//^^^^ Switch executes one block from many based on variable value.^^^^^
			switch(age)
			{
				case 18:
				cout<<"You are 18";
				break;
				case 22:
				cout<<"You are 22";
				break;
				case  2:
				cout<<"You are 2";
				break;
				default:
					cout<<"No special cases";
			}
			cout<<"Done with switch case";											

	return 0;
}
