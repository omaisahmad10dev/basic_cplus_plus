#include<iostream>
using namespace std;
class student{
    string name;
    int rollnumber;
    
   string subject1;
   string subject2;
    int marks;
    float percentage;

    public:
         student() {
        name = "";
        rollnumber = 0;
        subject1 = "";
        subject2 = "";
        marks = 0;
        percentage = 0.0;
    }
            void setbasicinfo(string n, int r){

                name=n;
                rollnumber=r;
            }

            void setsubjectinfo(string maths, string physics){
               subject1=maths;
               subject2=physics;
            }

            void setmarks(int m){
                marks=m;
            }
            void calculatepercentage(){
                percentage=(marks/200.0)*100;
            }
            void display() {
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollnumber << endl;
    cout << "Subject1: " << subject1 << endl;
    cout << "Subject2: " << subject2 << endl;
    cout << "Marks: " << marks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
}

            
    

};
int main(){
    student s1;
    s1.setbasicinfo("omais",102);
    s1.setsubjectinfo("maths","physics");
    s1.setmarks(130);
    s1.calculatepercentage();

    s1.display();


return 0;
}