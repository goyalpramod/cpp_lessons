#include<iostream>
using namespace std;

class Base1{
    protected:
        int base1var;
    public:
        void set_base1var(int a){
            base1var = a;
        }
};

class Base2{
    protected:
        int base2var;
    public:
        void set_base2var(int a){
            base2var = a;
        }
};

class Derived : public Base1 , public Base2{
    public:
        void show(){
            cout<<"the value of var 1 is "<<base1var<<" and that of var 2 is "<<base2var<<endl;
        }

};

int main(){
    Derived ram;
    ram.set_base1var(12);
    ram.set_base2var(24);
    ram.show();
    return 0;
}