//* Constructor 

// A constructor is special type of method/function that is invoked automatically during the object creation of a class.
// It used to allocate memory to object , initialized the state of object , initialize the data members.
// Constructors let you define initial values for the object's attributes, ensuring that every instance of a class starts with a specific setup. This makes it easy to create objects with different data while keeping the structure consistent.

// Characteristics =>
// 1. It has same name as the class.
// 2. Doesnt return anyting so no return type.
// 3. Called auto & only once at object creation.
// 4. Memory allocation happens when costructor called.
// 5. We can have multiple cosntructor in same class but the parameters should be different.
// Types =>
// 1. Default Constructor
// 2. Parameterized Constructor / 
// 3. Copy Constructor

//* Constructor overloading
// is a concept in Object-Oriented Programming (OOP) where a class has more than one constructor with different     parameters. Each constructor initializes an object differently based on the parameters passed during object creation.This feature allows objects to be initialized in multiple ways, making the class more flexible and adaptable to different use cases.

//* This Pointer / Keyword
// This pointer is a special keyword used in OOP, to refer to the current instance of the class (pinter that points to the current object.)
// When method or constructor parameters have the same names as class attributes, this helps distinguish between them.

//* Copy Constructor
// A copy constructor is a special constructor in C++ that creates a copy of an existing object.
// Copy constructor takes a reference to an object of the same class as an argument.


#include<iostream>
#include<string>
using namespace std;

class Teacher {
    // Properties / Atttributes
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;
    // Non parameterized 
    // Teacher(){                              
    //     cout<<"Constructor callled";
    // }

    // Parameterised
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept =dept;
        this->subject = subject;
        this->salary = salary;
    }

    Teacher(Teacher &obj){
        this->name = obj.name;
        this->dept = obj.dept;
    }

    void getInfo(){
        cout<<"Name: "<<name<<" Department: "<<dept;
    }

};

int main(){
    Teacher t1("Shradha","Compter Science","OOP",25000); // Constructor called
    // t1.getInfo();
    Teacher t2(t1);         // Copy Custructor
    t2.getInfo();


    return 0;
}