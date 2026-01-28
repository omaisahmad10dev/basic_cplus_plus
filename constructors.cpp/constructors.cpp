#include<iostream>
using namespace std;
class student{
    string name;
    int rollnumber;
    
  int mathsmarks;
  int physicsmarks;
   
    int totalMarks;
    float percentage;

    public:
         student() {
        name = "";
        rollnumber = 0;
        mathsmarks = 0;
        physicsmarks = 0;
        totalMarks=0;   
        percentage = 0.0;
    }
            void setbasicinfo(string n, int r){

                name=n;
                rollnumber=r;
            }

            void setsubjectinfo(int mMarks, int  pMarks){
             mathsmarks=mMarks;
                physicsmarks=pMarks;
            }

            
             void calculateTotal(){
              totalMarks =mathsmarks+physicsmarks;
            }
            void calculatepercentage(){
               
                percentage=(totalMarks/200.0)*100;
            }

           

            void display() {
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollnumber << endl;
    cout << "mathsMarks: " << mathsmarks << endl;
    cout << "physicsMarks: " << physicsmarks << endl;
    cout<<"total Marks "<<totalMarks<<endl;
    cout << "Percentage: " << percentage << "%" << endl;
}

            
    

};
int main(){
    student s1;
    s1.setbasicinfo("omais",102);
    s1.setsubjectinfo(70,72);
    s1.calculateTotal();
    s1.calculatepercentage();

    

    s1.display();


return 0;
}