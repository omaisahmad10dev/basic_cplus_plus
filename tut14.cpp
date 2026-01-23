#include<iostream>
using namespace std;
 
  {
  	int eId;
  	char favchar;
  	float salary;
  } ep;
  
  
    union mony
  {
  	int home;
  	char car;
  	float pounds;
  } ;

  
int main(){
	enum meal{ breakfast,lunch,dinner};
	
	meal k1=dinner;
	cout<<(k1==2);
	
//	cout<<breakfast;
//	cout<<lunch;
//	cout<<dinner;
	
	
	
	
//	
//		union mony m1;
//		 m1.car='c';
//	  m1.home=242;
//	 
//		cout<<m1.car<<endl;
		
	
		
	
	
	
//	struct employee omais;
//	omais.eId=1;
//	omais.favchar='c';
//	omais.salary=1200000000;
//	cout<<"The value is	"<<omais.eId<<endl;
//	cout<<"The value is	"<<omais.favchar<<endl;
//	cout<<"The value is	"<<omais.salary<<endl;
	
	
 
return 0;
}
