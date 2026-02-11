#include<iostream>
using namespace std;
class marks{
        int Obtained;
    public:
        int Total;
        void setdata();
        float getObtained();
        float gettotal();
};

void marks::setdata(void){
    Obtained=978;
    Total=1200;
    
}
float marks::getObtained(){
    return Obtained;
}

float marks::gettotal(){
    return Total;
}



class percentage:public marks{
    float percent;
        public:
        void calculate();
        void display();
        
};
void percentage::calculate(){
    percent = (getObtained()/gettotal())*100;

}
void percentage::display(){
         cout<<"obtained marks is :"<<getObtained()<<endl;
        cout<<"Total marks is :"<<gettotal()<<endl;
       
        cout<<"percentage is :"<<percent<<"%"<<endl;
}

int main(){
    percentage a;
    a.setdata();
    a.calculate();
    a.display();

return 0;
}