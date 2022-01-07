#include<iostream>
using namespace std;

// destructor never takes an argument nor does it return any value 

int count = 0;

class num{
    public:
        num(){
            count++;
            cout<<"this is the time when constructor is callled for object number "<<count<<endl;
        }

        ~num(){
            cout<<"destructor is called in object number "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first two objects"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}