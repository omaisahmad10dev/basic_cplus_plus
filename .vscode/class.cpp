#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    void showName() {
        cout << "Student Name: " << name;
    }
};

int main() {
    Student s;
    s.setName("omais");
    s.showName();
    return 0;
}

