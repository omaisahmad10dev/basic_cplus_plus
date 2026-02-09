#include<iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for any object number "<<count<<endl;

       
    }

    ~num(){
         count--;
        cout<<"This is the time my destructor is called for any object number "<<count<<endl;
    }
};

int main(){
        
    cout<<"when are inside are main function "<<endl;
    cout<<"Creating first object n1"<<endl;

    num n1;
    {
        cout<<"Enter this block"<<endl;
        cout<<"Creating two object"<<endl;

        num n2, n3;

        cout<<"Exict this block"<<endl;
    }
    cout<<"Back to main function"<<endl;

return 0;
}