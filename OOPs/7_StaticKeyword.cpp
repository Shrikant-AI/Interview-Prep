//* Static Keyword 
// The static keyword is used to create a static method or a static variable.
// Static methods can be called without creating an instance of the class.
// Static methods can access only static variables and methods of the class.

//* Static Variable
// Variables declared as static in the function are created and initialized once for the lifetime of the program.
// Static variables in a class are creted and initialized once and they are shared by all the objects of the class.

#include<iostream>
using namespace std;

// void fun(){
//     int x=0;
//     static int y=0 ; // Static variable

//     cout<<"Value of x is "<<x<<endl;
//     cout<<"Value of y is "<<y<<endl;
//     x++;
//     y++;
// }

class Myclass{
public:
    static int  x; // Static variable declaration
    void fun(){
        x++;
    } // Static method declaration
};
 int Myclass::x =0;

int main(){
    // fun();
    // fun();
    // fun();
    Myclass obj1,obj2;
    Myclass::x=0;
    cout<<"Val before any fun call: "<<obj1.x<<endl;
    obj1.fun();
    cout<<"Value of x after obj1 fun "<<obj1.x<<endl;
    // obj2.x=0;
    obj2.fun();
    cout<<"Value of x after obj2 fun "<<obj2.x<<endl;
    
}