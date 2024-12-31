// 1.3. Operator overloading is a feature of C++ that allows us to redefine the behavior of operators like +, -, *, /, etc. for user-defined data types.

#include<iostream>
using namespace std;

class Complex{
private:
    int real , imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(int r , int i){
        real = r;
        imag = i;
    }

    Complex operator +(Complex c){
        Complex obj;
        obj.real = real + c.real;
        obj.imag = imag + c.imag;
        return obj;

    }



    void print(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    Complex c1(5,2);
    Complex c2(3,1);
    Complex c3;
    c3 = c1+c2;
    c3.print();
    return 0;

}