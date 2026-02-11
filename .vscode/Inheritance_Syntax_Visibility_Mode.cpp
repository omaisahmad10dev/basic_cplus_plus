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
    employee omais(1),waseem(2);
    
    cout<<omais.salary<<endl;
    cout<<waseem.salary<<endl;
    programing haseeb(100);
    cout<<haseeb.languagecode<<endl;
    haseeb.getdata();
    cout<<haseeb.id<<endl;
    cout<<haseeb.salary<<endl;


return 0;
}