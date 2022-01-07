#include<iostream>
using namespace std;

template<class T = int> //default parameter given
class Kid{
    public:
    T data;
    Kid(T a){
        data = a;
    }
    void display();
};

template <class T>
void Kid<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}


int main(){
    Kid<int> k1(5);
    cout<<"The value of kid 1 is "<<k1.data<<endl;
    k1.display();
    return 0;
}