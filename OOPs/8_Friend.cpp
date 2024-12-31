//* Friend Funtion
// A friend function is a function that is given special access to the private and protected members of the class , even though it is not a member of the class.
// Useful when you want to allow an external function to access the private data of class for certain operations while keeping those data encapsulated for other part of code
// declared inside class using the keyword friend , defined outside the class.
// Friend fucntions are not inherited in child classes

#include<iostream>
using namespace std;


// class EquiTriangle{
// private:
//     float a;
//     float area;
//     float circumference;
// public:
//     void setter(float a){
//         this->a=a;
//         circumference=a*3;
//         area=(a*a*1.75)/4;
//     }

// friend void printResult(EquiTriangle);
// };

// void printResult(EquiTriangle et){
//     cout<<"Circumference: "<<et.circumference<<endl;
//     cout<<"Area: "<<et.area<<endl;
// }

// int main(){
//     EquiTriangle et;
//     et.setter(5);
//     printResult(et);
//     return 0;
// }


//* Friend Class
// A friend class allows one class to access the private and protected members of another class.
// Key Points about Friend Classes
// 1. One-Way Friendship: If ClassA is declared as a friend of ClassB, only ClassA can access ClassB's private/protected members. ClassB cannot access ClassA's private members unless it’s explicitly made a friend of ClassA as well.
// 2. Declared in the Class: Friendship is declared in the class that’s granting access, not in the friend class itself.
// 3. Use Sparingly: Friend classes bypass encapsulation, so use them sparingly to avoid compromising the design’s integrity.
// 4. Friend Classes are not Inherited: Friend classes are not inherited by derived classes.

class Box{
private:
    int length , width , height;
public:
    Box(int l,int w,int h):length(l),width(w),height(h){}
    // friend void display(Box);
    friend class Frdclass;
};

class Frdclass{
public:
    void display(Box b){
        cout<<"lenght: "<<b.length<<" Width: "<<b.width<<" Height: "<<b.height;
    }
};

int main(){
    Box b(10,20,30);
    Frdclass f;
    f.display(b);
    return 0;
}