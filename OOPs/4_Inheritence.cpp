//* Inheritence 

// When properties and member functions of base class are passed on to the derived class
// allows a class to "inherit" properties and methods from another class. 
// This helps to create a hierarchy of classes and promotes code reuse by allowing common functionality to be defined in a base (or parent) class and reused in derived (or child) classes.

// Types of Inheritence =
// 1. Single Inheritance : One child class is derived from one base class.
// 2. Multiple Inheritence : One child class is derived from multiple base classes.
// 3. Multilevel Inheritence : A class is derived from another class that is also derived from some other class. (forming a chain)
// 4. Hierarchical Inheritence : Multiple child classes are derived from single base class.
// 5. Hybrid Inheritence : Combination of multiple inheritence types.






#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student:public Person{
    public:
    int roll;

    Student(int roll, string name, int age):Person(name,age){
        this->roll=roll;
    }
    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<roll<<endl;
    }
};

int main(){
    Person p1("John", 20);
    // p1.getinfo();
    Student s1(10,"John",20);
    s1.getinfo();
    return 0;
}