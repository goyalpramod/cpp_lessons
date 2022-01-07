#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(void){
            cout<<"Hello"<<endl;
        }
};

class Base2{
    public:
        void greet(void){
            cout<<"whazzzuppppp"<<endl;
        }
};

class Base3{
    public:
        void greet(void){
            cout<<"How are you?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base2 :: greet();
        }
};

int main(){
    Base1 objbase1;
    Base2 objbase2;
    objbase1.greet();
    Derived obj_derived;
    obj_derived.greet();
    return 0;
}