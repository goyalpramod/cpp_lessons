#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:
    // constructor is  a special memeber function with the same name as the class
    // it is used to initialize the object of the class 
    //it is automatically invoked when an object is created

    Complex(){}//if we initialize objects without giving them a value, we have to make a default constructor

    // Complex(void); //default Constructor declaration
    Complex(int val,int val1);

    void printNum(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

    //constructor overloading
    Complex(int val){
        a = val;
        b=0;
    }

    //copy constructor example, makes an exact copy of an object
    // when no copy constructor is found complier provides its own copy constructor.
    Complex(Complex &obj){
        a = obj.a;
        b = obj.b;
    }

};
// default constructor 
// Complex :: Complex(void){
//     a=12;
//     b=3;
// }

// time for parameterized constructor
Complex :: Complex(int val,int val1){
    a = val;
    b = val1;
}

int main(){
    //implicit call
    Complex num(4,5);
    num.printNum();
    // explicit call
    // Complex num2 = Complex(2,4);
    // num2.printNum();

    Complex num_copy(num);
    num_copy.printNum();
    return 0;
}

// 1. it should be declared in the puclic section of the class 
// 2. they do not have a return tyoe not even void 
// it can have default arguments
// we cannot refer to their address 