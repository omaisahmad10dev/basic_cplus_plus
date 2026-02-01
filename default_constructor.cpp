#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    complex(void);

    void display(){
        cout<<"your number is "<<a<<"+ "<<b<<"i"<<endl;
    }
};

complex::complex(void){
    a=7;
    b=2;
}
int main(){
    complex a;
    a.display();
return 0;
}