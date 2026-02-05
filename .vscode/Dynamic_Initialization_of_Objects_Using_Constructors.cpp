#include<iostream>
using namespace std;

class bankDeposit{

    int principle;
    int years;
    float interestRate;
    float returnValue;

    public:
    bankDeposit(){}
    bankDeposit(int p, int y, float r); // r can be value llike 0.03 decemil form
    bankDeposit(int p, int y, int r); //r can be value like 12 percentage
   void showData();
};

    bankDeposit::bankDeposit(int p, int y, float r){
    principle=p;
    years=y;
    interestRate=r;
    returnValue=principle;

    for(int i=2; i<y; i++){
         returnValue=returnValue*(1+interestRate);
    }

}
 bankDeposit::bankDeposit(int p, int y, int r){
    principle=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principle;

    for(int i=0; i<y; i++){
         returnValue=returnValue*(1+interestRate);
    }

}

void bankDeposit::showData(){

    cout<<" principle amount was "<<principle<<"Return value after "
        <<years<<" years is "<<returnValue<<endl;
}



int main(){

    bankDeposit bd1,bd2, bd3;

    int p;
    int y;
    float r;
    int R;

    cout<<"Enter the value of p, y and r "<<endl;

   

    cin>>p>>y>>r;
    bd1=bankDeposit(p,y,r);
    bd1.showData();

    
     cout<<"Enter the value of p, y and R "<<endl;

    cin>>p>>y>>R;
    bd2=bankDeposit(p,y,R);
    bd2.showData();

    

return 0;
}