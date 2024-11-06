//* Abstraction
// is the concept of hinding the complex implementaion details (unnecessary details) and exposing only the only essential features of objects.
// In cpp, abstraction is achieved by using abstract classes (classes with pure virtual functions).This class specify what function should derived class implement without specifying how.

// Key features / prop =
// 1. Abstract classes are used to provide a base class from which the other class can be derived.
// 2. Abstract classes can have both abstract and non-abstract methods, constructors and destructors, static members., member variables, member functions.
// 3. Abstract classes cannot be instantiated, they are only meant to be inherited


#include<iostream>
#include<cmath>
using namespace std;

class AbstractClass {
    public:
    virtual double area() = 0; // Pure virtual function
    virtual void display() = 0; // Pure virtual function
};

class Circle:public AbstractClass{
    public:
    double radius;
    float pi=3.14;

    Circle(double r):radius(r){};

    double area(){
        return  pi*radius*radius;
    }
    void display(){
        cout<<"Area of Circle is "<<area()<<endl;
    }
};

int main(){
    Circle c(5);
    c.display();
    return 0;
}

