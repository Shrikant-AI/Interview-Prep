//* CLASS & OBJECT

// A class is blueprint or template for creating objexts.
// It is a user defined datatype ,  collection of methods and variables that are used to create objects.
// Classes help in orgnising code and creating modular , reusable structure.
// An object is an instance of class. It has its own values ,behavior, identity.
// Objects allows interaction with the methods and properties defined in the class.
// Instance : In simple terms, it’s an actual object with allocated memory that represents one example of the class, with its own unique set of attribute values.

//* Access Modifiers

// PRIVATE => Data & Methods are accessible only inside the class.(We can acces it by using special setter and getter function)
// PUBLIC => Data & Methods are accessible from anywhere in the program.
// PROTECTED => Data & Methods are accessible within the class and to its child/derived classes.

//* Encapsulation 

// Encapsulation is wrapping up of data and member function (data & code to manipulate the data) under a single unit called class.
// DATA-HIDING => In Encapsulation the data in a class is hidden from any other classes, this is known as data hiding.

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
    

    // Methods / Member Functions
    void changeDept(string newDept){
        dept = newDept;
    }
    void setSalary(double s){
        salary = s;
    }
    void getSalary(){
        cout<<"Salary of "<<name<<" is "<<salary<<endl;
    }

};

int main(){
    // Creating an object of class
    Teacher t1;
    t1.name="Shrikant";
    // cout<<t1.name;
    t1.setSalary(25000);
    t1.getSalary();

    return 0;
}