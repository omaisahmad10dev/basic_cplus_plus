//#include<iostream>
//using namespace std;
//class complex{
//	int a, b;
//	public:
//		void setnumber(int n1 ,int n2 ){
//			a=n1;
//			b=n2;
//		}
//		friend complex sumcomplex(complex o1,complex o2);
//		
//		void printnumber(){
//			cout<<"Your number is: "<<a<<"+"<<b<<"i"<<endl;
//		}
//};
//complex sumcomplex(complex o1,complex o2){
//	complex o3;
//	o3.setnumber((o1.n1+o2.n1),(o1.n2+o2.n2));
//	return o3;
//}
//int main(){
//	complex c1,c2, sum;
//	c1.setnumber(1,2);
//	c1.printnumber();
//
//	
//	c2.setnumber(3,4);
//	c2.printnumber();
//	
//	sum=sumcomplex(c1,c2);
//	sum.printnumber();
//	return 0;
//}







#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Function to set values
    void setNumber(int r, int i) {
        real = r;
        imag = i;
    }

    // Friend function declaration
    friend Complex addComplex(Complex c1, Complex c2);

    // Function to print complex number
    void printNumber() {
        cout << "Complex number is: " << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.setNumber(c1.real + c2.real, c1.imag + c2.imag);
    return result;
}

int main() {
    Complex c1, c2, sum;

    c1.setNumber(1, 2);
    c2.setNumber(3, 4);

    c1.printNumber();
    c2.printNumber();

    sum = addComplex(c1, c2);
    sum.printNumber();

    return 0;
}

