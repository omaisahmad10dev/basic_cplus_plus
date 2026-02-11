#include<iostream>
using namespace std;

class employee{
    
   
    public:
    int id;
     float salary;
    employee(int inpId){
        id=inpId;
        salary=34.0;
    }
    employee(){}
};
// clild class
class programing:public employee{
    public:
    int languagecode;
    programing(int inpId){
        id=inpId;
        salary=300.0;
        languagecode=9;
    }
    
    void getdata(){
        cout<<id<<endl;
    }

};

int main(){
    // objict
    employee ali(1),ahmad(2);
    
    cout<<ali.salary<<endl;
    cout<<ahmad.salary<<endl;
    programing khan(100);
    cout<<khan.languagecode<<endl;
    khan.getdata();
    cout<<khan.id<<endl;
    cout<<khan.salary<<endl;


return 0;
}