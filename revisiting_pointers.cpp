#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        void set_data(int num1,int num2){
            a = num1;
            b = num2;
        }

        void get_data(){
            cout<<"The value of the real part is "<<a<<endl;
            cout<<"The value of the imaginary part is "<<b<<endl;
        }
};

int main(){
    Complex c1;
    Complex c2;
    Complex *ptr = &c2;
    Complex *ptr2 = new Complex;
    c1.set_data(4,7);
    c1.get_data();    
    (*ptr).set_data(6,2);
    (*ptr).get_data();
    ptr2->set_data(7,9);
    ptr2->get_data();
    return 0;
}