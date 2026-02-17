#include<iostream>
using namespace std;
class marks{
    int obtained;
    public:
    int total;
   int setdata();
   float getobtained();
   float gettotal();
};
int marks::setdata(void){
    obtained=978;
    total=1200;
}
float marks::getobtained(){
    return obtained;
}
float marks::gettotal(){
    return total;
}

class percentage:public marks{
    float percent;
    public:
    void calculate();
    void display();
};
void percentage::calculate(){
    percent=(getobtained()/gettotal())*100;
}
void percentage::display(){
    cout<<"obtained marks is:"<<getobtained()<<endl;
    cout<<"total marks is:"<<gettotal()<<endl;

    cout<<"percentage is:"<<percent<<"%"<<endl;
}
int main(){
    //object
    percentage a;
    a.setdata();
    a.calculate();
    a.display();

return 0;
}