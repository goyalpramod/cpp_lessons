#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        virtual void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){
    BaseClass *base_class_pointer;
    BaseClass baseObj;
    DerivedClass derivedObj;

    base_class_pointer = &derivedObj;
    base_class_pointer->display();

    return 0;
}