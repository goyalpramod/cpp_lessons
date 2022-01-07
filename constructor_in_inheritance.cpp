#include<iostream>
using namespace std;

/*
order of execution of constructors 
case 1 

class B:public A,public C
    first A() then C() then B()

case 2

class A:public B, virtual public C
    first C() then B() then A()
*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printDataBase2(){
            cout<<"The value of data1 is "<<data2<<endl;
        }
};

class Derived: public Base1, public Base2{
    int derived1,derived2;
    public:
        Derived(int a,int b, int c, int d): Base1( a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"constructor of derived class is called"<<endl;
        }
        void printDataDerived(){
            cout<<"The value od derived1 is "<<derived1<<endl;
            cout<<"The value od derived2 is "<<derived2<<endl;
        }
};

int main(){
    Derived ro(1,2,3,4 );
    ro.printDataBase2();
    return 0;
}