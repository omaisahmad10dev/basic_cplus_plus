#include<iostream>
using namespace std;
class students{
	private:
		int obtainedmarks;
		int totalmarks;
		public:
			void setmarks(int obtained, int total){
				obtainedmarks=obtained;
				totalmarks = total;
			}
			float calculatepercentage(){
				return (float) obtainedmarks / totalmarks * 100;
			}
			void display(){
				float percentage=calculatepercentage();
				
				cout<<"obtainedmarks is "<<obtainedmarks<<" / "<<"totalmarks is "<<totalmarks<<endl;
				cout<<"percentage is "<<percentage<<"%"<<endl;
			}
};
int main(){
	students s1;
	s1.setmarks(978,1200);
	
	s1.display();
	
	return 0;
}
