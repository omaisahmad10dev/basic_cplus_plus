#include<iostream>
using namespace std;
int main(){
//example of ARRAY

	int marks[4]={34,23,32,43};
	
	
	cout<<"these are marks"<<endl;
	cout<<marks[0]<<endl;
	//you can change the value of an array
	marks[2]=12;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	
	
	
	cout<<"these are maths marks"<<endl;
	int mathsmarks[4];
	mathsmarks[0]=4234;
	mathsmarks[1]=2312;
	mathsmarks[2]=1231;
	mathsmarks[3]=2311;
	
	cout<<mathsmarks[0]<<endl;
	cout<<mathsmarks[1]<<endl;
	cout<<mathsmarks[2]<<endl;
	cout<<mathsmarks[3]<<endl;
	
	// array to discuss of loops
	
//	for(int i=0;i<4; i++ ){
//		
//		cout<<"The value of marks "  <<i<<  " is "<<marks[i]<<endl;
//	}
//	
	//DO the same using while and do_while loop
//	int i=0;
	
//	while(i<4){
//		cout<<"the value of marks" <<i<< " is" <<marks[i]<<endl;
//		i++;
//	}

//		int i=0;
//	
//	do{
//		cout<<"The value of marks " <<i<< " is "   <<marks[i]<<endl;
//		i++;
//		
//	}
//				while(i<4);
//	


		int *p=marks;
		cout<<*(p++)<<endl;
		cout<<*(p++)<<endl;
		cout<<*(p++)<<endl;
		cout<<*(p++);
		
//		cout<<"The  value of *p is  "  <<*p<<endl;
//		cout<<"The  value of *(p+1) is  "  <<*(p+1)<<endl;
//		cout<<"The  value of *(p+2) is  "  <<*(p+2)<<endl;
//		cout<<"The  value of *(p+3) is  "  <<*(p+3)<<endl;
		
	
	return 0;
}
