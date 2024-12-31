// *Object-Oriented Programming (OOP) is a programming model that focuses around data, or objects, rather than functions and logic. An object can be defined as a data field that has unique attributes and behavior.

//*OOP is a programming model based on the concept of objects, which can contain data and code: data in the form of fields (often known as attributes or properties), and code in the form of procedures (often known as methods). Many of the most widely used programming languages (such as C++, Java, and Python) are multi-paradigm and support object-oriented programming to a greater or lesser degree

//* OOP promotes the principles of abstraction, encapsulation, inheritance, and polymorphism, making programs modular, reusable, and easier to maintain.


// Code Reusability: OOP promotes code reusability through inheritance, allowing you to create new classes that inherit properties and behaviors from existing ones.
// Modular Design: OOP encourages breaking down complex systems into smaller, self-contained objects, making code more organized, easier to understand, and maintainable.
// Enhanced Security:Data Encapsulation: OOP's encapsulation principle hides implementation details, protecting sensitive data from unauthorized access. This enhances security by limiting the scope of data exposure.
// Abstraction: OOP's abstraction concept helps you focus on the essential features of objects, simplifying problem-solving and reducing complexity.
// Faster Development: By reusing existing code and using well-defined object relationships, OOP can significantly speed up development time.
// Scalability: OOP's modular design makes it easier to scale software systems as they grow in complexity and size.
// Easier Maintenance: OOP's organized structure and clear object boundaries make it easier to identify and fix issues, reducing maintenance costs.


//* CLASS & OBJECT

// A class is blueprint or template for creating objexts.
// It is a user defined datatype ,  collection of methods and variables that are used to create objects.
// Classes help in orgnising code and creating modular , reusable structure.
// An object is an instance of class. It has its own values ,behavior, identity.
// Objects allows interaction with the methods and properties defined in the class.
// Instance : In simple terms, it’s an actual object with allocated memory that represents one example of the class, with its own unique set of attribute values.
//*IRL ex =
//  Class = It defines properties like color, brand, model, and methods like start(), drive(), stop()
// Characteristics = What is the color of your car? What is the Chassis number of your car? etc 
//  Behavior = How to start the car? How to change the gear of the car? etc.
//  Object = A specific car of any model, like the car you own
//  Class: Recipe for baking a cake.
// Object: The actual cake baked using the recipe.

//* Access Modifiers

// PRIVATE => Data & Methods are accessible only inside the class.(We can acces it by using special setter and getter function)
// PUBLIC => Data & Methods are accessible from anywhere in the program.
// PROTECTED => Data & Methods are accessible within the class and to its child/derived classes.

//* Encapsulation 

// Encapsulation is wrapping up of data and member function (data & code to manipulate the data) under a single unit called class.
// DATA-HIDING => In Encapsulation the data in a class is hidden from any other classes, this is known as data hiding.

//* IRL ex
// A capsule is a real-life example of encapsulation. It combines different medicines and stores them in a single unit. You don't need to know the exact composition of the medicines inside to consume the capsule. This is similar to how encapsulation in OOP hides the internal implementation details of an object, exposing only the necessary interface.


//* Abstraction
// Abstraction is the process of hiding unnecessary details and focusing on the essential features of an object or system. In OOP, it means exposing only the necessary information to the user, while hiding the internal implementation details. This simplifies complex systems and makes them easier to understand and use.
//* IRL ex
// A car is a real-life example of abstraction. You don't need to know the internal workings of the engine or transmission to drive it. You simply interact with the steering wheel, pedals, and other controls, which represent the abstracted interface of the car.


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