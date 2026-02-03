#include<iostream>
using namespace std;
class complex{

    int real,imag;
    public:

    complex(int r=0 ,int i=0){
        real=r;
        imag=i;
    }

    void showData(){
        cout<<"complex number is "<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    complex c1;
    complex c2(4);
    complex c3(5,8);

    c1.showData();
    c2.showData();
    c3.showData();

return 0;
}