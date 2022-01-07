#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 122;
            cout<<"Enter id"<<endl;
            cin>>id;
        }

        void getId(void){
            cout<<"The ID of this employee is "<<id<<endl;
        }
};

int main(){
    Employee ram,sam,tim;
    ram.setId();
    ram.getId();
    return 0;
}