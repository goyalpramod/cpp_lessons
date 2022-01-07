#include<iostream>
using namespace std;

//Base class
class Employee{
    int id;
    float salary;
    public:
        Employee(){}
        Employee(int inpID){
            id = inpID;
            salary = 25.0;
        }
};

//Derived class
/*
syntax for which 
class {{derived-class-name}} : {{visibility-mmode}} {{base-class-name}}   ({{}} means this will be replaced)
{
    class member/methods etc..
}
Note:
1. Default visibility moode is private
2. public visibility mode: Public memebers of the base class become public memebers of the derived class
3. private visibility mode: private memebers of the base class become private memebers of the derived class
4. private memebers are never inherited
*/
// creating programmer derived class from Employee base class
class Programmer : Employee{
    public:
        int languageCode = 9;
};


int main(){
    Employee harry(1), rohan(2);    
    return 0;
}

//  different types of inheritance 
/* 1. single or derived inheritance, when b(derived class) comes from a(base class)
2. multiple inheritance, a and b make c
3. hierarchichal inheritance a makes b and c 
4.multilevel inheritance a -> b -> c
    eg. animal -> mammal -> cow
5.hybrid inheritance. joh karna hai karo.
(more stuff is added in the derived classes)
*/

/*
                        Public derivation      Private derivation       Protected derivation
    1.Private members       not inherited           not inherited           Not inherited
    2.protected members     protected               private                 Protected 
    3.Public memebers       public                  private                 Protected 

    protected is basically like private but it can be inherited
*/