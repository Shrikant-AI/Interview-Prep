//* Destructor

// A destructor is a special member function in C++ that is automatically called when an object goes out of scope or is explicitly deleted. Its main purpose is to release any resources that the object may have acquired during its lifetime, such as dynamically allocated memory, file handles, or network connections.

// Characteristics of Destructors =
// 1. Name: The destructor has the same name as the class, but with a ~ (tilde) prefix.
// 2. No Parameters: Destructors do not take parameters, meaning they cannot be overloaded.
// 3. No Return Type: Destructors do not return any value, not even void.
// 4. Automatic Invocation: Destructors are called automatically when the object goes out of scope, or if delete is used on a dynamically allocated object.
// 5. Only One Destructor Per Class: You cannot have more than one destructor in a class, as it cannot be overloaded.

// Why Destructors are Important =
// Destructors are especially important when a class allocates memory or other resources. Without a destructor to release those resources, a program would suffer from memory leaks and resource leaks.

// Destructors in Dynamic Memory Management =
// When using dynamic memory, destructors help prevent memory leaks. Without a destructor, dynamically allocated memory would remain allocated even after the object is destroyed, leading to memory wastage.

#include<iostream>
#include<string>
using namespace std;

class Myclass{
 public:
 int* data;

 Myclass(int value){
    data = new int(value);
    cout<<"Constructor called & memory initialized to "<<*data<<endl;
 }

 ~Myclass(){
    delete data;
    cout<<"Destructor called & memory deallocated"<<endl;
    
 }
};

int main(){
    Myclass obj1(10);
}