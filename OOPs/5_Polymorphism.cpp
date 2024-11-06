//* Polymorphism
// Polymorphism is the ability of object/methods to take different forms or behave diff ways depending on the context in which they are used.
// A class can have multiple methods with the same name but different parameters.

//* 1. Compile Time Polymorphism
// 1.1  Constructor overloading = A class can have multiple constructors with the same name but different parameters.
// 1.2 Function overloading = where multiple function can have same name but with diff parameters.

#include<iostream>
#include<string>
using namespace std;

// class Myclss{
// public:
//     void display(int i){
//         cout<<"Display int: "<<i<<endl;
//     }
//     void display(string s){
//         cout<<"Display string: "<<s<<endl;
//     }
//     void display(double d){
//         cout<<"Display double: "<<d<<endl;
//     }
// };

// int main(){
//     Myclss obj;
//     obj.display("Shree");
// }


// 1.3. Operator overloading is a feature of C++ that allows us to redefine the behavior of operators like +, -, *, /, etc. for user-defined data types.
//! Code Pending

//* 2. Run Time Polymorphism 

//  2.1. Function overriding =  we redefine the member function of a class which it inherited from its base class. The function signature remains same but the working of the function is altered to meet the needs of the derived class. So, when we call the function using its name for the parent object, the parent class function is executed. But when we call the function using the child object, the child class version will be executed.

// class Parent{
// public:
//     void show(){
//         cout<<"Parent show function called"<<endl;
//     }
// };
// class Child:public Parent{
// public:
//     void show(){
//         cout<<"Child class function called"<<endl;
//     }
// };

// int main(){
//     // Parent p;
//     // p.show();
//     Child c;
//     c.show();
//     return 0;
// }


// 2.2 Virtual Function =
// A virtual function is a function in cpp that you expect to be redefined (overridden) in child classes.
// Why to use =
        // - allows polymorphism
        // - allows runtime binding (late bindig )of function calls based on object type.
        // - Function overriding


class Shape{
public: 
    virtual void draw(){
        cout<<"Drawing a shape"<<endl;
    }
};

class Circle:public Shape{
public: 
    void draw(){                                // Override the virtual function
        cout<<"Drawing a circle"<<endl;
    }
};

class Rectangle:public Shape{
    void draw(){                                // Override the virtual function
        cout<<"Drawing a rectangle"<<endl;
    }
};

int main(){
    Shape* shape1 = new Circle();      // Shape pointer pointing to a Circle object
    Shape* shape2 = new Rectangle();   // Shape pointer pointing to a Rectangle object

    shape1->draw();  // Calls Circle::draw because shape1 points to a Circle
    shape2->draw();  // Calls Rectangle::draw because shape2 points to a Rectangle
    return 0;
}