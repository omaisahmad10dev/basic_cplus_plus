#include<iostream>
using namespace std;
int main(){
	int marks[]={34 , 43 , 23 , 12};
//	cout<<marks[0]<<endl;
//	cout<<marks[1]<<endl;
//	cout<<marks[2]<<endl;
//	cout<<marks[3]<<endl;
	
	
	
//	int mathematics[4];
//	mathematics[0]=78;
//	mathematics[1]=788;
//	mathematics[2]=778;
//	mathematics[3]=748;
//	cout<<"mathematics marks"<<endl;
//	cout<<mathematics[0]<<endl;
//	cout<<mathematics[1]<<endl;
//	mathematics[2]=2332;
//	cout<<mathematics[2]<<endl;
//	cout<<mathematics[3]<<endl;
	
//	for(int i=0; i<4; i++){
//		cout<<marks[i]<<endl;
//	}
	
//	 int i=0;
//	while(i<4){
//		cout<<marks[i]<<endl;
//		i++;
//	}
	
//	int i=0;
//	do{
//		cout<<marks[i]<<endl;
//		i++;
//	}while(i<4);
//	

	int* p=marks;
	cout<<*(p++)<<endl;
	cout<<*(p++)<<endl;
	cout<<*(p++)<<endl;
	cout<<*(p++)<<endl;
//	cout<<"the value of marks[0] is "<<*p<<endl;
//	cout<<"the value of marks[1] is "<<*(p+1)<<endl;
//	cout<<"the value of marks[2] is "<<*(p+2)<<endl;
//	cout<<"the value of marks[3] is "<<*(p+3)<<endl;
	
	
	
	return 0;
}
