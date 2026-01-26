#include<iostream>
using namespace std;
class marks{
	int maths;
	int physics;
	friend class teacher;
	public:
		void setnumber(int m, int p){
			maths=m;
			physics=p;
		}
	
		
		
};

class teacher{
 	 string teachername;
 	 int teacherid;
 
 	 	 public:
		   void setTeacher(string name, int id){
		   	teachername=name;
		   	teacherid=id;
		   } 
		   
		   void checkresult(marks &m){
		   	cout<<"Teacher name:"<<teachername<<endl;
		   	int total=m.maths+m.physics;
		   	float percentage=(total/200.0)*100;
		   	
		   	cout<<"total marks "<<total<<endl;
		   	cout<<"percentage "<<percentage<<"%"<<endl;
		   	
		   	
		   	if (percentage>=50){
		   		cout<<"result:pass"<<endl;
		   	}	else{
			   
		   		cout<<"result : fail"<<endl;
		   		}
		   		if (percentage>=70)
				  
		   			cout<<"Grade:A"<<endl;
		   			
		   		else if	(percentage>=60)
		   			cout<<"grade:B"<<endl;
			
				   else
				   cout<<"grade: C";
		   }
		   
		   
};

int main(){
	marks c1;
	c1.setnumber(90,45);
	
	teacher t1;
	
	t1.setTeacher("bilal sir",102);
	t1.checkresult(c1);	
	return 0;
}
