#include<iostream>
using namespace std;

class Complex; // Forward decleration, compiler goes from top so it would not understand the complex parameter in sumRealComplex so we declare complex here.

class Calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }

        int sumRealComplex(Complex, Complex);
};

class Complex{
    int a,b;
    // individually declaring functions of a class as friend.
    friend int Calculator :: sumRealComplex(Complex,Complex);
    // to decalre the whole calass as a friend sue the syntax.
    // friend class Calculator;
    friend Complex sumComplex(Complex o1,Complex o2);
    public:
        void setNumber(int n1,int n2){
            a = n1;
            b = n2;
        }

        void printNum(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a + o2.a);
}

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    Complex o1,o2;
    o1.setNumber(3,5);
    o2.setNumber(2,7);
    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"The answer is "<<res<<endl;
    return 0;
}