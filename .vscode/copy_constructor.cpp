#include<iostream>
using namespace std;

class number{
    int a;
    public:
    number(){}
    number(int num){
        a=num;
    }

    void display(){
        cout<<"The number of this object is "<<a<<endl;
    }

};
int main(){
    number x,y,z(23);
    z.display();

return 0;
}