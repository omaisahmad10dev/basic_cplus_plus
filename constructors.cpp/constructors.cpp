#include<iostream>
using namespace std;

class student{
    string name;
    int rollnumber;
    int mathsmarks;
    int physicsmarks;
    int totalmarks;
    float percentage;

public:
    // Parameterized Constructor
    student(string n, int r, int m, int p){
        name = n;
        rollnumber = r;
        mathsmarks = m;
        physicsmarks = p;

        totalmarks = mathsmarks + physicsmarks;
        percentage = (totalmarks / 200.0) * 100;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollnumber << endl;
        cout << "Maths Marks: " << mathsmarks << endl;
        cout << "Physics Marks: " << physicsmarks << endl;
        cout << "Total Marks: " << totalmarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main(){
    student s1("Omais Ahmad", 24233, 34, 45);
    s1.display();
    return 0;
}
